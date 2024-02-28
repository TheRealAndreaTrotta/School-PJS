;sono riuscito a stampare il compleanno in multicolore
;ora per non ho tempo per sistemarlo con il resto.

ORG 100h

termiDOB:

;1
    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '1'       
    MOV CH, 0Eh 
    MOV BX, 72Eh      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 72Eh      
    MOV [BX], CX
    
;1    
    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '1'       
    MOV CH, 0Eh 
    MOV BX, 730h      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 730h      
    MOV [BX], CX
    
;/    
    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '/'       
    MOV CH, 0Eh 
    MOV BX, 732h      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 732h      
    MOV [BX], CX

;0
    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '0'       
    MOV CH, 0Eh 
    MOV BX, 734h      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 734h      
    MOV [BX], CX
    
;8    
    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '8'       
    MOV CH, 0Eh 
    MOV BX, 736h      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 736h      
    MOV [BX], CX
    
;/

    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '/'       
    MOV CH, 0Eh 
    MOV BX, 738h      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 738h      
    MOV [BX], CX
    
;2    
    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '2'       
    MOV CH, 0Eh 
    MOV BX, 73Ah      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 73Ah      
    MOV [BX], CX
    
;0
    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '0'       
    MOV CH, 0Eh 
    MOV BX, 73Ch      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 73Ch      
    MOV [BX], CX

;0
    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '0'       
    MOV CH, 0Eh 
    MOV BX, 73Eh      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 73Eh      
    MOV [BX], CX

;4 

    MOV AX, 0B800h    
    MOV DS, AX        
    MOV CL, '4'       
    MOV CH, 0Eh 
    MOV BX, 740h      
    MOV [BX], CX      
    
    XOR CH, 0Ah
    MOV BX, 740h      
    MOV [BX], CX
                       
loop termiDOB                      
                     
                      
    
RET              

                              
                                                                     

