;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Giovedi' 20 Novembre 2023                                                                                ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:              Calcolatrice Base +|-|?                                                                                  ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h
                       
mov di, 200h            ;Punto il DI all'indirizo 200h.
mov cl, 3               ;Imposto la lunghezza del ciclo.

input:
    mov ah, 01h         ;Inserisco la cifra
    int 21h
    
    mov [di], al        ;Copio il valore salvato il AL nella locazione a cui punta il DI.
    inc di              ;Incremento il DI, di conseguenza la locazione di memoria (per via di come ho impostato il codice). 
    loop input
    
mov al, '='             ;Stampo il carattere ASCII dell'uguale.
mov ah, 0Eh
int 10h

cmp [0201h], 2Bh        ;Valuto se '+' e' stato salvato nella locazione 201h.
je addizione            ;Se si, salto ad addizione.

cmp [0201h], 2Dh        ;Valuto se '-' e' stato salvato nella locazione 201h.
je sottrazione          ;Se si, salto ad sottrazione.

jmp come_scusa          ;Nel caso non soddisfi la richiesta, salto a come_scusa.

addizione:
    add [0200h], 0202h  ;Aggiungo al valore della locazione 0200h il valore della locazione 0202h.
    
    mov al, [0200h]           
    mov ah, 0Eh
    int 10h 
    jmp end
         
sottrazione:
    sub [0200h], 0202h  ;Sottraggo al valore della locazione 0200h il valore della locazione 0202h.
    
    mov al, [0200h]          
    mov ah, 0Eh
    int 10h
    jmp end
      
come_scusa:             
    mov al, '?'         ;Stampo il carattere del punto interrogativo.
    mov ah, 0Eh
    int 10h 

end:    
    ret


;E' una calcolatrice un po' farlocca pero'
