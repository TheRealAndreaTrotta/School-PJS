;model small: direttiva che ha l'obiettivo di istruire l'assemblatore a utilizzare due
;segmenti dati: uno per codice ,uno per  i dati e lo stack. L'output dell'assemblatoore 
;sara' un .exe
;stack100: dice all'assemblatore che dovro' riservare una zona zona stack di 100B
;data: identifica dove iniziano i dati ch evogliamo salvare  

.model small           

.stack 100

.data
	input_msg db "inserisci ua stringa: $"
	output_msg db 0dh, 0ah, "stinga invertita:$"
	str db 99,?, 100 dup( '$' )	;buffer per memorizzare l'input
	top dw 0 			        ;puntatore alla cima dello stack

.code
	mov ax, @data
	mov ds, ax
	mov ss, ax	
	mov sp, 100h		    ;inizializzo lo stack pointer e lo punto a 100h overo 256 caratteri più avanti rispeto alla base delsegmnto ss
    ;richiedo all'utente di inserire la stringa
	mov ah, 09h
	lea dx, input_msg	    ;load effective address (offset)
	int 21h
    ;leggi l'input dall'utente 
	mov dx, offset str	    ;direttiva on disponibilein tutti gli assemblatori
	mov ah, 0ah 
	int 21h
    ;metti la stringa nello stack:
reverse_string:
	mov si, offset str
	mov cl, [ si+1 ]	    ;carichi il numero di carattei inseriti, salvato nel secondo byte quindi se prendiamo l'offset della stringa e' sufficente puntare al byte successivo
	add si, 2 		        ;si punta all'inizio della stringa                                                                                                    
	xor ch,ch
push_chars:
	mov al, [ si ]
	xor ah,ah
	push ax			        ;decrementa di due unità lo stack pointer e carica ax nello stack ( solo word ossia registri a 16 bit )
	inc si			        ;punta alla lettera successiva
	loop push_chars

print:
	mov dx,offset output_msg
	mov ah, 09h
	int 21h

	mov si, offset str+1
	mov cl, [si]
print_reverse:
	pop dx
	mov ah, 02h
	int 21h
	loop print_reverse
final_exit:
   	 mov ah, 4Ch    ; Uscita dal programma
   	 int 21h
	
	
		