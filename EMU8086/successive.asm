;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Lunedi' 03 Dicembre 2023                                                                                 ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:                                                                                                                       ;
;                       Data una lettera C ed una cifra N inserite da tastiera stampa                                            ;
;                       gli N caratteri successivi alla lettera data                                                             ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;


org 100h

mov bx, 0200h           ;Punto alla locazione di memoria 200h con il registro BX.
mov cl, 2               ;Inserisco la quantita' di cicli da svolegere in cl (2).

start:                  
    mov ah, 01h         ;Richiedo un input all'utente.
    int 21h
    
    mov [bx], ax        ;Inserisco il valore presente nel registro AX nella locazione di memoria a cui punta BX.
    inc bx              ;In questo modo indico la prossima locazione di memoria, es: 200h -> 201h.
    loop start          ;Torno alla lable start fino all'azzeramento del registro CL.

mov bx, 0201h           ;Punto il registro bx alla locazione di memoria 0201h.
mov al, [bx]            ;Copio il contenuto presente nella memoria a cui punta il registro BX in AL.
sub al, 30h             ;Sottraggo di 30h nella tabella ASCII cosi' da dare al registro CL il corretto numero i cicli da svolgere nel loop.
mov cl, al              ;Una volta trovato il numero di cicli, copio il suo valore presente in AL nel registro CL.

mov bx, 0200h           ;Vado a ripuntare il registro BX alla locazione di memoria 0200h.
mov al, [bx]            ;Copio il valore a cui punta il registro BX nella locazione precedentemente accennata.
next:
    inc al              ;Increemento il valore contenuto in AL tante volte quante sono il numero di cicli, es: a3 -> d.
    loop next    
    
end:
    mov ah, 02h         ;Stampo il risultato ottenuto dalle precedenti operazioni.
    mov dl, al
    int 21h
        
ret




