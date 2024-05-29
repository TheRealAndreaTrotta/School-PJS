;--------------------------------------------------------------------------------------------------------------------------------;
;                                                                                                                                ;
;Data:                  Lunedi' 05 Dicembre 2023                                                                                 ;
;                                                                                                                                ;
;Alunno:                Ussato Andrea 3^C Informatica                                                                            ;
;                                                                                                                                ;
;Progetto:              Dato un carattere in input: stampa C se e' una cifra, L se e' una lettera, A se altro.                   ;
;                       Il programma continua a richiede l'input fino all'inserimento di '\'.                                    ;
;                                                                                                                                ;
;--------------------------------------------------------------------------------------------------------------------------------;

org 100h

Start:  

    input:
        mov ah, 01h
        int 21h
        
        cmp al, '9'             ;Primo controllo del range dei numeri. 
        jg MIL                  ;Se e' maggiore del numero 9 allora salta alla lable "Maybe it's a Letter".
        
        cmp al, '0'             ;Secondo controllo del range dei numeri.
        jl StampaA              ;Seguendo la tabella ASCII se e' minore di 0 e' inopinabile che sia Altro.
        jmp StampaC             ;Se i due controlli non hanno rilevato un "Out Of Range" allora e' inopinabile che sia una Cifra.
        
        MIL:
           and al, 0DFh         ;Creo un mascheramento per evitare problemi di "case" con l'input di una lettera.
           
           cmp al, 'Z'          ;Primo controllo del range dell'alfabeto.
           jg StampaA           ;Se e' maggiore della lettera ASCII "Z" e' inopinabile che sia un carattere speciale (Altro).
           
           cmp al, 'A'          ;Secondo controllo del range dell'alfabeto. 
           jl StampaA           ;Se e' minore della lettera ASCII "A" e' inopinabile che sia un carattere speciale (Altro).
           jmp StampaL          ;Se i due controlli non hanno rilevato un "Out Of Range" allora e' inopinabile che sia una Lettera.
           
        StampaC:
            mov al, 'C'         ;Copio il valore ASCII della lettera "C" per la stampa di tale carattere.
            mov ah, 02h         ;Servizio per visualizzare a schermo il contenuto di AL.
            mov dl, al
            int 21h             ;Servizio di stampa.
            jmp input           ;Ritorna alla lable "Input"
            
        StampaL:
            mov al, 'L'         ;Copio il valore ASCII della lettera "C" per la stampa di tale carattere.
            mov ah, 02h
            mov dl, al
            int 21h
            jmp input
            
        StampaA:
            cmp al, '\'         ;Essendo che i controlli precedenti hanno valutato l'inserimento di un carattere speciale, verifico che non sia il "tasto di break".
            je End              ;Se il riscontro del "Break" e' positivo allora termina il programma.
            
            mov al, 'A'         ;Copio il valore ASCII della lettera "C" per la stampa di tale carattere.
            mov ah, 02h
            mov dl, al
            int 21h
            jmp input
End: 
    ret




    