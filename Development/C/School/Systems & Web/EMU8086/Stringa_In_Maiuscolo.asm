;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Giovedi' 20 Novembre 2023                                                                                ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:              Data una stringa in input, stamparla in maiuscolo.                                                       ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h

mov di, 200h                ;Imposto il valore della locazione 0200h nel DI.  

start:
    mov ah, 01h             ;Richiedo di inserire il carattere.
    int 21h
    
    mov [di], al            ;Copio il valore presente in al nella locazione a cui punta il DI.
    inc di                  ;Incremento il DI cosicche' a sua volta in base al mio codice, incremento indirettamente il numero della locazione della memoria.
    
    cmp al, 13              ;Sto comparando il valore presente in AL con 0D.
    
    je converti_maiuscolo   ;Se il valore e' 13 allora salto alla lable.
    jmp start               ;Se il valore non e' 13 allora torno alla lable start.

converti_maiuscolo:
    mov di, 200h            ;Riprendo la locazione 200h.
    
    ;Torna a capo
    mov dl, 0Dh             ;ASCII per il ritorno a capo (CR)
    mov ah, 02h             ;Servizio per il posizionamento del cursore.
    int 21h                 ;Ho notato che stampa meglio del 10h in questa situazione.
    
    mov dl, 0Ah             ;ASCII per l'avanzamento riga (LF)
    mov ah, 02h             ;Servizio per il posizionamento del cursore.
    int 21h 

stampa:
    mov al, [di]            ;Carica il carattere dalla memoria.
    cmp al, 0               ;Verifica se il valore e' 0.
    je fine_stampa          ;Se il valore e' 0, termina la stampa.

    and al, 11011111b       ;Maschera per la conversione in maiuscolo.
    
    mov ah, 0Eh             ;Servizio di output del carattere.
    int 10h                 ;Stampa il carattere presente in  AL.
    inc di                  ;Incremento il DI per passare al carattere successivo.
    jmp stampa              ;Continua il ciclo fino alla fine della stringa.

fine_stampa:
    ret             
