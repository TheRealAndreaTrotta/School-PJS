org 100h

megaloop:

    mov cx, 2
    mov al, '1'
    mov ah, 09h
    mov bl, 03h

    oneone:
        
        int 10h
        xor bl, 04h
    
        loop oneone
;---------------------- 
; ne ho fatti due perche' un numero era "morto"
;-----------------------
    mov cx, 2
    mov al, '1'
    mov ah, 09h
    mov bl, 05h

    onetwo:
    
        int 10h
        xor bl, 02h
    
        loop onetwo 

       
loop megaloop


ret




