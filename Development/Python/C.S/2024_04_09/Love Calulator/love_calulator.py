'''
Devi scrivere un programma che testa la compatibilità tra due persone.

Per calcolare il punteggio d'amore tra due persone:
Prendi i nomi di entrambe le persone e controlla quante volte le lettere appaiono nella parola TRUE.
Poi controlla quante volte appaiono nella parola LOVE.
Poi combina questi numeri per fare un numero di due cifre.

Per punteggi d'amore inferiori a 10 o superiori a 90, il messaggio dovrebbe essere:
"Il tuo punteggio è , voi andate insieme come coca e mentos."
Per punteggi d'amore tra 40 e 50, il messaggio dovrebbe essere:
"Il tuo punteggio è , voi state bene insieme."
Altrimenti, il messaggio sarà solo il loro punteggio. ad es.:
"Il tuo punteggio è ." 

Esempio
nome1 = "Angela Yu" 
nome2 = "Jack Bauer" 

T occorre 0 volte
R occorre 1 volta
U occorre 2 volte
E occorre 2 volte
Totale = 5

L occorre 1 volta
O occorre 0 volte
V occorre 0 volte
E occorre 2 volte
Totale = 3
Punteggio d'amore = 53
Stampa: "Il tuo punteggio è 53."

Queste funzioni ti aiuteranno:
lower() count()
'''

def check(name_0, name_1):
    true_point = 0
    love_point = 0

    name01 = (name_0 + name_1).lower()

    for character in 'true':
        true_point = true_point + name01.count(character)
    for character in 'love':
        love_point = love_point + name01.count(character)

    final_point = int(str(true_point) + str(love_point))

    return final_point

name_0 = input('Please enter your name: ')
name_1 = input('Please enter their name: ')

final_point = check(name_0, name_1)

if final_point > 90 or final_point < 10:
    print(f"Your score is {final_point}, you go together like coke and mentos.")
elif 40 <= final_point <= 50:
    print(f"Your score is {final_point}, you look good together.")
else:
    print(f"Your score is {final_point}.")