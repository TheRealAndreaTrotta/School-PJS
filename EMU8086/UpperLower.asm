;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Lunedi' 05 Dicembre 2023                                                                                 ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:              Data una lettera da tastiera, stampare a schermo le successive 4 in modo che si alternino                ;
;                       Maiuscole e minuscole..                                                                                  ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h

Start:
    mov cl, 4                       ;Contatore per le successive 4 lettere.
    mov bl, 0                       ;Flag per l'alternanza tra maiuscole e minuscole.

    mov ah, 01h                     ;Input da tastiera.
    int 21h                         ;Interruzione per leggere il carattere.

    mov ah, 02h                     ;Servizio di output del carattere (messo qui per evitare ripetizioni superflue).

    Slup:
            cmp bl, 0               ;Se bl = 0, stampa la lettera in maiuscolo, altrimenti in minuscolo.
            je UC
            jne LC
        
        UC:                         ;Upper Case.
            and al, 11011111b
            jmp Print
        
        LC:                         ;Lower Case.
            or al, 00100000b
        
        Print:
            mov dl, al
            int 21h
        
            inc bl                  ;Alterna il flag tra 0 e 1 per alternare maiuscole e minuscole.
            and bl, 1               ;Mantieni solo il bit meno significativo (0 o 1).
            
            inc al
            loop Slup               ;Ripeti finche' il contatore non raggiunge zero.

ret           