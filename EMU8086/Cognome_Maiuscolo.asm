;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Giovedi' 16 Novembre 2023                                                                                ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:                                                                                                                       ;
;                       Dato il cognome in minuscolo salvato in memoria a partire                                                ;                       
;                       dalla locazione 0x0200, stamparlo a monitor tutto in maiuscolo                                           ;                       
;                       (Extra il cognome di partenza non ha case definito).                                                     ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h

mov [0200h], 'u'
mov [0201h], 's'
mov [0202h], 's'
mov [0203h], 'a'
mov [0204h], 't'
mov [0205h], 'o'

mov cx, 6
mov di, 0200h

cognome:         
        mov al, [di]
        sub al , 20h
        mov ah, 0Eh
        
        int 10h
        inc di
        loop cognome 
ret




