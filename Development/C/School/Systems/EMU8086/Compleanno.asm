
;----------------------------------------------------------------;
;                  CARICAMENTO DEI DATI IN MEMORIA               ;
;----------------------------------------------------------------;

org 100h

mov [0200h], 'A'   ; alloco all'indirizzo 200h il carattere ASCII 'A', modo comodo per dire: 41h o 0x41.
mov [0201h], 'n'
mov [0202h], 'd'
mov [0203h], 'r'
mov [0204h], 'e'
mov [0205h], 'a'

mov [0206h], 'U'
mov [0207h], 's'
mov [0208h], 's'
mov [0209h], 'a'
mov [020Ah], 't'
mov [020Bh], 'o'

mov [020Ch], '1'   
mov [020Dh], '1'   
mov [020Eh], '/'   
mov [020Fh], '0'   
mov [0210h], '8'   
mov [0211h], '/'   
mov [0212h], '2'   
mov [0213h], '0'   
mov [0214h], '0'   
mov [0215h], '4' 

;----------------------------------------------------------------;
;               POSIZIONAMENTO PER LA STAMPA DEL NOME            ;
;----------------------------------------------------------------;

mov di, 200h        ; indico al registro DI (Destination Index), l'indirizzo di memoria a cui deve riferirsi.
mov cx, 6           ; imposto il registro cx a 6 (in questo caso bastava anche cl) perche' servira come condizione di termine per il loop.
mov ah, 02h         ; posizionamento iniziale del cursore (in questo caso mi serve per quello che faro' dopo).
 

int 10h             ; servizio di interruzione video.

;----------------------------------------------------------------;
;                         STAMPA DEL NOME                          ;
;----------------------------------------------------------------;
    
nome:
    mov al, [di]    ; copio nel registro al il contenuto nella locazione a cui il reg. DI fa riferimento in questa circostanza.
    mov ah, 0Eh     ; servizio di stampa.
    int 10h         

    inc di          ; incrementa di 1 il numero di locazione di memoria a cui il reg. DI fa riferimento in questa circostanza.
    loop nome       ; ritorna alla label nome fino all'azzeramento del reg. cx.

;----------------------------------------------------------------;
;          POSIZIONAMENTO PER LA STAMPA DEL COMPLEANNO           ;
;----------------------------------------------------------------;

mov di, 20Ch    
mov cx, 10

mov ah, 02h         ; posizionamento del cursore.   
mov bh, 0           ; posizionamento della pagina.
mov dh, 12          ; posizionamento della riga.
mov dl, 35          ; posizionamento della colonna. 

int 10h             

;----------------------------------------------------------------;
;                       STAMPA DEL COMPLEANNO                    ;
;----------------------------------------------------------------;
    
compleanno:
    mov al, [di]
    mov ah, 0Eh     
    int 10h

    inc di 
    loop compleanno 
;----------------------------------------------------------------;
;           POSIZIONAMENTO PER LA STAMPA DEL COGNOME             ;
;----------------------------------------------------------------;

mov di, 206h    
mov cx, 6

mov ah, 02h         ; cursore.   
mov bh, 0           ; pagina.
mov dh, 24          ; riga.
mov dl, 74          ; colonna. 

int 10h             ; servizio di interruzione video.

;----------------------------------------------------------------;
;                       STAMPA DEL COGNOME                       ;
;----------------------------------------------------------------;
    
cognome:
    mov al, [di]
    mov ah, 0Eh
    int 10h

    inc di 
    loop cognome

  
ret 

; assembly si fa desiderare piu' delle donne.

; ho dedicato diverse ore a capire come creare l'effetto "lampeggiante", ho trovato il modo di colorare le lettere ma 
; ho riscontrato altri problemi con posizionamento una volta fatto. Quindi lo consegno cosi'.
    

