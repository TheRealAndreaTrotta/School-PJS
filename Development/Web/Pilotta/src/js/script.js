document.addEventListener("DOMContentLoaded", function() {
    const images = document.querySelectorAll('.zoomable');

    images.forEach(image => {
        image.addEventListener('mouseenter', () => {
            image.style.transform = 'scale(1.5)'; 
        });

        image.addEventListener('mouseleave', () => {
            image.style.transform = 'scale(1)'; 
        });
    });
});
