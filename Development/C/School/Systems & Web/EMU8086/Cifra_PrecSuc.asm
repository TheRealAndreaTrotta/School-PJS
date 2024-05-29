;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Giovedi' 20 Novembre 2023                                                                                ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:              Data una cifra in input, stampare quella precedenta e quella successiva.                                 ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h

start:
    mov ah, 01h     ;Richiedo una cifra in input.
    int 21h
    
    cmp al, '0'     ;Valuto se l'input e' 0.
    je start        ;Nel caso lo fosse, richiedo l'input.
    cmp al, '9'     ;Valuto se l'input e' 9.          
    je start        ;Nel caso lo fosse, richiedo l'input.  
    
sub al, 1       ;Sottraggo il valore della cifra per stampare il valore precedente.  
mov ah, 0Eh       
int 10h           
    
add al, 2       ;Aumento il valore della cifra di 2 per stampare il valore successivo.    
mov ah, 0Eh       
int 10h           

ret               




