# Esercizio: Calcolatore di Area di un Cerchio:

# Scrivi un programma Python che chieda all'utente di inserire il raggio di un cerchio e poi calcoli 
# e stampi l'area corrispondente del cerchio. Puoi utilizzare il valore di π (pi greco) come 3.14 per 
# semplificare il calcolo.


pi= 3,1415926535 

def circle_Area(radius):
    return pi * (radius ** 2)

def main(void):
    radius = float(input('Please, enter the radius: '))
    print("Result: ", circle_Area(radius))

