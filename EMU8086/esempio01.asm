;Gio 9/11/23 Primo esempio codice Assembly Emu8086
;Classe 3C Inf

;Il programma scrive la lettera 'A' sulla shell DOS
; sfruttando la mappatura in memoria della modalita'
; Testo del sistema Video (quello di default).

;In tale modalita' sono previsti 4096 bytes 
; (=1000H, 4kBytes) per ogni pagina, anche se solo 4000
; di essi saranno poi effettivamente utilizzati, 
; cioe'  (25 righe) * (80 colonne) * (2bytes):  

; Di quei 2B, la parte bassa e' il codice del colore
; e la parte alta il carattere ASCII da visualizzare 
;  

ORG 100h
    MOV AX, 0B800h    ; set AX = B800h (VGA memory).
    MOV DS, AX        ; copy value of AX to DS.
    MOV CL, 'A'       ; CL = 41h (ASCII code).
    MOV CH, 01011111b ; CH = color attribute.
    MOV BX, 15Eh      ; BX = position on screen:15Eh = 350 indice relativo
    MOV [BX], CX      ; w.[0B800h:015Eh] = CX....copia la word in CX 350B dopo B800h
                      ;Quindi se B800h e' il primo carattere in alto a sinistra
                      ;dello schermo, la lettera 'A' viene copiata 175 caratteri  
                      ; piu' avanti, ma essendo largo solo 80 colonne,
                      ; ogni 80 caratteri va a capo quindi 175 e' sulla terza riga 
                      ; esattamente nella 16^ colonna
    
RET               ; returns to operating system.

                              
                                                                     
;vedi qui per chiarimenti    https://en.wikipedia.org/wiki/VGA_text_mode

