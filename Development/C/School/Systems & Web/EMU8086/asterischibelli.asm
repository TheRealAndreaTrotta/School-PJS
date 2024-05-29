;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Lunedi' 03 Dicembre 2023                                                                                 ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:                                                                                                                       ;
;                       Dato un numero N compreso tra 0 e 9,                                                                     ;
;                       stampa una riga di N asterischi di colori diversi.                                                       ;
;--------------------------------------------------------------------------------------------------------------------------------;


org 100h

mov ax, 0B800h      ;Imposto il seed nella VGA memory.
mov ds, ax

start:
    mov ah, 01h     ;Legge un singolo carattere dalla tastiera.
    int 21h         

    sub al, '0'     ;Converte il carattere ASCII nel valore numerico (es: 3 = 33h - 30h).
    mov cl, al      ;Salva il numero di asterischi da stampare.

    mov dl, '*'     ;Carico il DL il valore ASCII dell'asterisco.
    mov dh, 02h     ;Indico il colore.
    mov bx, 0002h   ;Indico la riga in cui iniziare a stampare.
    
slup:
    mov [bx], dx    ;Carico il contenuto di DX nella locazione di memoria puntata dal registro BX.
    add bx, 2       ;Incremento BX di due per dare spazio al prossimo carattere e al suo codice colore.
    inc dh          ;Incremento la posizione delle colonne.
    loop slup
ret

