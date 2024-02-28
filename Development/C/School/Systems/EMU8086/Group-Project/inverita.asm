; Lisa Minari 3C INF 01-02-2024

;1)inverti la stringa   
;2)capitalize
;3)camelize (CiaoBobComeStaAlice)
;4)rimuovi un carattere
;5)sostituisci carattere
;6)cerca sotto scrittura

.model small   
.stack 100     

.data
    stringa db "Inserisci una stringa: $"
    stringa_inv db 0dh, 0ah, "La stringa invertita e': $"   
    str db 99,?, 100 dup('$') 
             
.code
    mov ax, @data
    mov ds, ax
    mov ss, ax
    mov sp, 100h    
;Richiedi all'utente di inserire una stringa
    mov ah, 09h
    lea dx, stringa
    int 21h         
;Leggi l'input dall'utente 
    mov dx, offset str
	mov ah, 0ah
	int 21h
    
inverti_stringa:
    ; Metti la stringa nello stack
    mov si, offset str
    mov cl, [si+1]               ;Carica il secondo byte di str, ovvero il numero di caratteri inseriti
    add si,2                     ;SI punta l'inizio della stringa
    xor ch,ch
    
push_s:
    mov al, [si]
    xor ah,ah
    push ax
    inc si
    loop push_s    

stampa:
    mov dx, offset stringa_inv   
    mov ah, 09h                 
    int 21h
    
    mov si, offset str +1
    mov cl, [si] 
stampo_inverita:
    pop dx            
    mov ah, 02h       
    int 21h
    loop stampo_invertita

exit:
    mov ah, 4Ch                
    int 21h

end