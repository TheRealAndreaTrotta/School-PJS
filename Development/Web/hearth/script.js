const redHeart = document.querySelector(".red-heart");

redHeart.addEventListener("click", () => {
    redHeart.classList.remove("animation")
    grayHeart.classList.remove("fill-color")
});