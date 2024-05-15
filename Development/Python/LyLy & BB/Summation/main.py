import random

def trovo_somma (numeri, somma):
    for c in numeri:
        somma = somma + c
    return somma


numeri = []
somma = 0
quantita = int(input("Quanti numeri vuoi inserire all'interno della tua lista?\n"))
for c in range(quantita):
    numeri.append (random.randint (0, 10))
    print(numeri[c], end=' ')

somma = trovo_somma(numeri, somma)

print("\nLa somma dei numeri nella lista è", somma)