;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Giovedi' 16 Novembre 2023                                                                                ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:                                                                                                                       ;
;                       Dati due numeri A e B, salvati in memoria a partire dalla locazione                                      ;
;                       0x0200 (0 <= A,B,<= 15), calcolare il prodotto dei due numeri per somme                                  ;
;                       successive e visualizzarlo a schermo. Nota: per somme successive s'intende                               ;
;                       ad esempio che per calcolare 3*5 si dovrà calcolare 3+3+...  5 volte.                                    ;                     
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

mov [0200h], 9           ; Metto nella locazione 0200h il moltiplicando.
mov [0201h], 3           ; Metto nella locazione 0201h il moltiplicatore (numero di cicli).

mov cx, [0201h]          ; Carico il moltiplicatore nel registro CX.
mov di, 0200h            ; Punto il valore della locazione 0200h (9) al registro DI.

mol:
    add al, [di]         ; Sommo il valore contenuto nel registro DI nel registro AL.
    loop mol             ; Ripeto il ciclo fino all'azzeramento di CX (somme successive).


;Moltiplico il risultato per 10:

mov bl, 10               ; Carico il moltiplicatore nel registro BL.
mul bl                   ; AX = AL * BL.

;Divido il risultato per 100:
mov bl, 100              ; Carico il divisore
div bl                   ; AX = risultato / 100 ---> (quoziente in AL, resto in AH).

;Stampo le decine: 
add al, '0'              ; Converto il valore delle decine in carattere ASCII.
mov ah, 0Eh              ; Servizio di stampa.
int 10h                  ; Servizio di interruzione per visualizzare a schermo.
 
 
;Stampo le unita' (funziona ancora male): 
add al, '0'              
mov ah, 0Eh              
int 10h                  

ret

;Ho bisogno di un Indiano bravo.

