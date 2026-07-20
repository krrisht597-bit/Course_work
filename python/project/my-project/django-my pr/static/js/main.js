/*=============== SHOW & CLOSE MENU ===============*/
const navmenu = document.getElementById('nav'),
      navToggle = document.getElementById('nav-toggle'),
      navClose = document.getElementById('nav-close')

/*Show menu */
if(navToggle){
   navToggle.addEventListener('click', () =>{
       navmenu.classList.add('show-menu')
   })
}

/*Hide menu */
if(navClose){
   navClose.addEventListener('click', () =>{
       navmenu.classList.remove('show-menu')
   })
}
 
/*=============== REMOVE MENU MOBILE ===============*/
const navlink = document.querySelectorAll('.nav__link')

const linkAction = () =>{
    const navmenu = document.getElementById('nav')
    if(navmenu) navmenu.classList.remove('show-menu')
}
navlink.forEach(n => n.addEventListener('click', linkAction))

/*=============== FORCE RESPONSIVE HEIGHT FUNCTION ===============*/
const forceSliderHeight = () => {
   const windowHeight = window.innerHeight;
   const sliders = document.querySelectorAll('.home__slider');
   const images = document.querySelectorAll('.home__img');
   const dataBoxes = document.querySelectorAll('.home__data');

   sliders.forEach(slider => {
      slider.style.setProperty('height', windowHeight + 'px', 'important');
   });

   if (window.innerWidth >= 1150) {
      images.forEach(img => {
         img.style.maxHeight = (windowHeight * 0.40) + 'px'; 
         img.style.width = 'auto';
      });
      dataBoxes.forEach(box => {
         box.style.position = 'absolute';
         box.style.bottom = '60px'; 
      });
   }
}

/*=============== SWIPER HOME ===============*/
const swiperHome = new Swiper('.home__swiper', {
    loop: true,
    pagination: {
        el: '.swiper-pagination',
        clickable: true,
    },
    pagination: {
        el: '.swiper-pagination',
        clickable: true,
    },
    autoplay: {
        delay: 3000,
        disableOnInteraction: false,
    },
    on: {
       init: function () {
          forceSliderHeight();
       },
       resize: function () {
          forceSliderHeight();
       }
    }
});

window.addEventListener('resize', forceSliderHeight);
window.addEventListener('DOMContentLoaded', forceSliderHeight);

/*=============== CHANGE HEADER STYLES ===============*/
const scrollHeader = () => {
    const header = document.getElementById('header')
    window.scrollY >= 50 ? header.classList.add('scroll-header')
                         : header.classList.remove('scroll-header')
}
window.addEventListener('scroll', scrollHeader);

/*=============== SEARCH BOX TOGGLE ===============*/
const searchToggle = document.getElementById('search-toggle'),
      searchBox = document.getElementById('search-box')

if (searchToggle && searchBox) {
   searchToggle.addEventListener('click', () => {
      searchBox.classList.toggle('show-search')
      if (searchBox.classList.contains('show-search')) {
         const input = searchBox.querySelector('.nav__search-input')
         if (input) input.focus()
      }
   })
}