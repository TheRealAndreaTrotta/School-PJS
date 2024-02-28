;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Lunedi' 03 Dicembre 2023                                                                                 ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:              Cifrario di Cesare.                                                                                      ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h

mov bx, 200h                 ;Imposto il valore della locazione 0200h nel DI.  
mov cl, 0

start:
    mov ah, 01h              ;Richiedo di inserire il carattere.
    int 21h
    
    mov [bx], al             ;Copio il valore presente in al nella locazione a cui punta il DI.
    inc bx                   ;Incremento il DI cosicche' a sua volta in base al mio codice, incremento indirettamente il numero della locazione della memoria.
    inc cl
    
    cmp al, 13               ;Sto comparando il valore presente in AL con 0D.
    jne start
    
return:  
    mov ah, 02h              ;Torno a capo (carrege return).
    mov dl, 13
    int 21h
    
    mov dl, 10
    int 21h

dec cl
mov bx, 0200h                ;Punto il registro BX alla locazione 200h.
mov ah, 0Eh                  ;Non serve metterlo nel loop, chiedo prima il servizio di stampa mettendolo nel registro AH.
ROT13:
     mov al, [bx]            ;Copio il contenuto del registro BX nel registro AL.         
     add al, 13              ;Aggiungo 13 al valore in AL per cambiarlo.
     cmp al, 'z'             ;Chiedo di paragonare il nuovo valore con "z" per codificare correttamente un carattere che e' uscito dal range dell'alfabeto minuscolo.
     jg repositioning        ;Se il valore e' piu' grande, salta alla lable "repositioning". 
     jmp continua            ;Se il contenuto risulta accettabile, salto alla lable "continua".
     
     repositioning:
         sub al, 26          ;Sottraggo al valore in AL 26 posizioni per tornare nel range corretto.
     
     continua:
         int 10h             ;Visualizzo a schermo il valore codificato.
         
         inc bx              ;Incremento il registro BX per passare al contenuto della locazione di memoria successiva.
         loop ROT13          ;Continua la codifica fino all'azzeramento del registro CL.

ret




