const imageViewer = document.querySelector(".imageViewer");
const imageViewer_image = document.querySelector(".imageViewer-image");

function viewImage(info) {
    image = info.style["background-image"].split('"')[1]
    imageViewer_image.src = image;
    imageViewer.style.display = "flex";
}

function closeImageViewer() {
    imageViewer.style.display = "none";
    
}