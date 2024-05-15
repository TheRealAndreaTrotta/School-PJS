#Scrivi una funzione che prende una stringa e conta quante parole ci sono nella stringa. Assumi che le parole siano separate da spazi.
def trovo_vocali(vocali, frase, numero):
    k = 0
    for c in frase:
        if c in vocali:
            numero = numero + 1
        k= k+1
    return numero
frase = input("inserisci una frase e ti trovo quante vocali ci sono: ").lower()
vocali = "aeiou"
numero = 0
numero = trovo_vocali(vocali, frase, numero)
print("Le vocali contenute nella frase sono ",numero)