;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Lunedi' 05 Dicembre 2023                                                                                 ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:              Leggere due caratteri da tastiera e stampare 'S' se sono successivi sulla tavola scii, 'N' altrimenti.   ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h

Start:
    mov bx, 0200h       ;Imposta BX a 0200h, dove verranno memorizzati i caratteri.
    mov cl, 2           ;Contatore per leggere due caratteri.
    
input:
    mov ah, 01h         ;Funzione per leggere un carattere dall'input.
    int 21h             ;Interruzione per leggere il carattere.
    
    mov [bx], al        ;Memorizza il carattere nella posizione di memoria puntata da BX.
    inc bx              ;Passa alla posizione di memoria successiva.
    loop input          ;Ripeti finche' il contatore non raggiunge 0.
    
    dec bx              ;Torna al secondo carattere perche' BX punta a 0202!
    dec al              ;Confrontalo con il carattere precedente decrementandolo.
    
    cmp [bx-1], al      ;Confronta il carattere originale con il suo valore precedente.
    je Yeep             ;Se sono consecutivi (o precisamente in questo caso, uguali), salta alla label Yeep.
    
    Noop: 
         mov al, 'N'    ;Se non sono consecutivi, imposta AL a 'N'.
         jmp End        ;Salta alla label End.

    Yeep:
         mov al, 'Y'    ;Se sono consecutivi, imposta AL a 'Y'.
    
End:     
    mov dl, al          ;Sposta il risultato in DL per l'output.
    mov ah, 02h         ;Funzione per visualizzare un carattere.
    int 21h             ;Interruzione per mostrare il carattere.

    ret                 
