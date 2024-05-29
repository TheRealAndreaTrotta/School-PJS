;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Martedi' 14 Novembre 2023                                                                                ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:              Stampa dei primi dieci numeri e dell'alfabeto                                                            ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h            ;Origine del codice.

;--------------------------------------------------------------------------------------------------------------------------------;                                  
;                               NUMERI                                                                                           ;
;--------------------------------------------------------------------------------------------------------------------------------;                                  
        
mov cx, 10          ;Imposto il registro cx con una lunghezza (lenght) di 10.
mov al, 30h         ;Imposto il valore '0' (ASCII 30h) nel registro AL.

numeri:
    mov ah, 0Eh     ;Il servizio di scrittura e' stato inserito nel registro AH.
    int 10h         ;Servizio di interruzione del BIOS (grazie a questo posso stampare a schermo).
    
    inc al          ;Incremento il valore contenuto in AL.
    loop numeri     ;Torno alla laber "numeri" fino all'azzeramento del valore contenuto nel registro CX.
    

;Carrege Return:
    mov ah, 0Eh
    mov al, 0AH     ;0AH nel codice ASCII sta per: "New Line". 
    int 10h
    

; Reimposta la colonna a 0 prima di iniziare l'alfabeto minuscolo:

    mov ah, 02h     ; Servizio per il posizionamento del cursore.
    mov dh, 1       ; Riga 1
    mov dl, 0       ; Colonna 0
    int 10h 

;-------------------------------------------------------------------------------------------------------------------------------;                                  
;                       ALFABETO MAIUSCOLO                                                                                      ;
;-------------------------------------------------------------------------------------------------------------------------------;                                  

mov cx, 26          ;imposto il registro cx con una lenght di 26      
mov al, 40h         ;imposto il "seme" nel registro AL a 40h = 'A'    

alfabeto_maiuscolo:
    mov ah, 0Eh
          
    inc al      
    int 10h         
    loop alfabeto_maiuscolo 

;-------------------------------------------------------------------------------------------------------------------------------;
     
ret


          