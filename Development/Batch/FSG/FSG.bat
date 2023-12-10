@echo off 
echo Creation of the file system...

cd \
md .\Users\andre\OneDrive\Desktop\FSGroot
cd .\Users\andre\OneDrive\Desktop\FSGroot
md Documenti,Programmi,Temp

    cd Documenti
    md File,Foto,Video
    
        copy NUL .\file\Diagramma.xls | copy NUL .\file\Lavoro.txt | copy NUL .\file\Program.bat
        copy NUL .\foto\Camion.gif | copy NUL .\foto\Casa1.png | copy NUL .\foto\Macchina.jpg
        copy NUL .\video\Ferrari.mp4 | copy NUL .\video\Gladiatore.mov | copy NUL .\video\Film.mp4

    cd ..

    cd Programmi
    md Office365,Giochi,Altro
    
        copy NUL .\office365\Excel.exe | copy NUL .\office365\Outlook.exe | copy NUL .\office365\Word.exe
        copy NUL .\giochi\Fortnite.exe | copy NUL .\giochi\Minecraft.exe
        copy NUL .\altro\Photshop.exe | copy NUL .\altro\VScode.exe | copy NUL .\altro\Unity.exe

    cd ..

    copy C:\Users\andre\OneDrive\Desktop\SoftDev\Development\Batch\Lorem.txt .\temp

@echo off 
echo Done!

exit
