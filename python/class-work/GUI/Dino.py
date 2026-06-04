from tkinter import *
import random

WIDTH = 900
HEIGHT = 300
GROUND_Y = 250

window = Tk()
window.title("Chrome Dino")
window.resizable(False, False)

score = 0
game_running = True

canvas = Canvas(window, width=WIDTH, height=HEIGHT, bg="white")
canvas.pack()

score_label = Label(window, text="Score: 0", font=("Arial", 18, "bold"))
score_label.pack()

canvas.create_line(0, GROUND_Y + 40, WIDTH, GROUND_Y + 40, width=2)


class Dino:

    def __init__(self):
        self.x = 100
        self.y = GROUND_Y
        self.velocity = 0
        self.jumping = False

        self.body = canvas.create_rectangle(
            self.x,
            self.y,
            self.x + 35,
            self.y + 40,
            fill="black"
        )

        self.head = canvas.create_rectangle(
            self.x + 20,
            self.y - 20,
            self.x + 50,
            self.y + 10,
            fill="black"
        )

        self.eye = canvas.create_oval(
            self.x + 40,
            self.y - 15,
            self.x + 45,
            self.y - 10,
            fill="white"
        )

    def jump(self, event=None):

        if not self.jumping:
            self.velocity = -16
            self.jumping = True

    def update(self):

        self.velocity += 1
        self.y += self.velocity

        if self.y >= GROUND_Y:
            self.y = GROUND_Y
            self.velocity = 0
            self.jumping = False

        canvas.coords(
            self.body,
            self.x,
            self.y,
            self.x + 35,
            self.y + 40
        )

        canvas.coords(
            self.head,
            self.x + 20,
            self.y - 20,
            self.x + 50,
            self.y + 10
        )

        canvas.coords(
            self.eye,
            self.x + 40,
            self.y - 15,
            self.x + 45,
            self.y - 10
        )


class Cactus:

    def __init__(self):

        self.x = WIDTH
        self.y = GROUND_Y

        self.body = canvas.create_rectangle(
            self.x,
            self.y,
            self.x + 25,
            self.y + 40,
            fill="green"
        )

        self.arm1 = canvas.create_rectangle(
            self.x + 5,
            self.y - 15,
            self.x + 12,
            self.y + 10,
            fill="green"
        )

        self.arm2 = canvas.create_rectangle(
            self.x + 13,
            self.y - 10,
            self.x + 20,
            self.y + 5,
            fill="green"
        )

    def move(self):

        self.x -= 10

        canvas.coords(
            self.body,
            self.x,
            self.y,
            self.x + 25,
            self.y + 40
        )

        canvas.coords(
            self.arm1,
            self.x + 5,
            self.y - 15,
            self.x + 12,
            self.y + 10
        )

        canvas.coords(
            self.arm2,
            self.x + 13,
            self.y - 10,
            self.x + 20,
            self.y + 5
        )

    def delete(self):

        canvas.delete(self.body)
        canvas.delete(self.arm1)
        canvas.delete(self.arm2)

    def off_screen(self):

        return self.x < -30


dino = Dino()
cacti = []


def collision(cactus):

    dino_box = canvas.bbox(dino.body)
    cactus_box = canvas.bbox(cactus.body)

    return (
        dino_box[2] > cactus_box[0]
        and dino_box[0] < cactus_box[2]
        and dino_box[3] > cactus_box[1]
        and dino_box[1] < cactus_box[3]
    )


def game_over():

    global game_running

    game_running = False

    canvas.create_text(
        WIDTH // 2,
        100,
        text="GAME OVER",
        fill="red",
        font=("Arial", 30, "bold"),
        tag="over"
    )

    canvas.create_text(
        WIDTH // 2,
        150,
        text="Press R to Restart",
        fill="blue",
        font=("Arial", 18),
        tag="over"
    )


def restart(event=None):

    global score, game_running, dino, cacti

    canvas.delete("all")

    canvas.create_line(
        0,
        GROUND_Y + 40,
        WIDTH,
        GROUND_Y + 40,
        width=2
    )

    score = 0
    score_label.config(text="Score: 0")

    cacti.clear()

    dino = Dino()

    game_running = True

    update_game()


def update_game():

    global score

    if not game_running:
        return

    dino.update()

    if random.randint(1, 50) == 1:
        cacti.append(Cactus())

    for cactus in cacti[:]:

        cactus.move()

        if collision(cactus):
            game_over()
            return

        if cactus.off_screen():

            cactus.delete()
            cacti.remove(cactus)

            score += 1
            score_label.config(text=f"Score: {score}")

    window.after(30, update_game)


window.bind("<space>", dino.jump)
window.bind("r", restart)
window.bind("R", restart)

update_game()

window.mainloop()               