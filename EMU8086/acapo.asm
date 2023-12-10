;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Lunedi' 03 Dicembre 2023                                                                                 ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:                                                                                                                       ;
;                       Data una cifra N stampa, a capo,                                                                 ;
;                       la precedente se minore di 5, la successiva se maggiore o uguale.                                        ;
;--------------------------------------------------------------------------------------------------------------------------------;



org 100h

mov bx, 0200h           ;Punto in BX la locazione di memoria 0200h.

start:
    mov ah, 01h         ;Richiedo l'input all'utente.
    int 21h
    
    mov [bx], al        ;Sposto il valore di al nella locazione di memoria a cui punta BX per non avere problemi per andare a capo.

;Return:    
    mov ah, 02h         
    mov dl, 13
    int 21h
    
    mov dl, 10
    int 21h
    
    mov al, [bx]        ;Sposto il valore presente nella locazione di memoria a cui punta BX in AL.

;Compare:    
    cmp al, 35h         ;Paragona il contenuto di AL con 5.
    jl minore
    je maggiore
    jg maggiore
    
minore:                 
    dec al              ;Decremento AL.
    mov ah, 02h         ;Servizio di sistema per la stampa con il 21h.
    mov dl, al          
    int 21h             
    jmp end             ;Salta alla lable END.
    
maggiore:
    inc al              ;Incremento AL.
    mov ah, 02h
    mov dl, al
    int 21h 
               
end:
    ret