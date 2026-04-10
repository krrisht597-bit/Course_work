#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
//Input / Output
//Random numbers
//Time for randomness
//Input validation
using namespace std;
class RockPaperScissors
{
public:
    void playGame()
    {
        int userChoice, computerChoice;
        char repeat = 'y';

        srand(time(0));

        do
        {
            cout << "\n--- Rock Paper Scissors ---\n";
            cout << "1. Rock\n2. Paper\n3. Scissors\n";
            cout << "Enter your choice (1-3): ";
            cin >> userChoice;

            // ? Letter / symbol check
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input! Please enter a NUMBER (1-3).\n";
                continue;
            }

            // ? Number range check
            if (userChoice < 1 || userChoice > 3)
            {
                cout << "Invalid choice! Enter only 1, 2 or 3.\n";
                continue;
            }
            computerChoice = (rand() % 3) + 1;
            // User choice
            switch (userChoice)
            {
            case 1: cout << "You chose Rock\n"; break;
            case 2: cout << "You chose Paper\n"; break;
            case 3: cout << "You chose Scissors\n"; break;
            }
            // Computer choice
            switch (computerChoice)
            {
            case 1: cout << "Computer chose Rock\n"; break;
            case 2: cout << "Computer chose Paper\n"; break;
            case 3: cout << "Computer chose Scissors\n"; break;
            }
            // Result
            if (userChoice == computerChoice)
                cout << "Result: Tie\n";
            else if ((userChoice == 1 && computerChoice == 3) ||
                     (userChoice == 2 && computerChoice == 1) ||
                     (userChoice == 3 && computerChoice == 2))
                cout << "Result: You Win!\n";
            else
                cout << "Result: Computer Wins!\n";
            // Play again validation
            do
            {
                cout << "Play again? (y/n): ";
                cin >> repeat;
                 if (repeat != 'y' && repeat != 'Y' &&
                    repeat != 'n' && repeat != 'N')
                {
                    cout << "Invalid input! Enter y or n.\n";
                }
            } while (repeat != 'y' && repeat != 'Y' &&
                     repeat != 'n' && repeat != 'N');

        } while (repeat == 'y' || repeat == 'Y');
    }
};
int main()
{
    RockPaperScissors game;
    game.playGame();
    cout << "\n============================================\n";
    cout << "Thanks for playing!\n";
    cout << "============================================\n";
    return 0;
}

