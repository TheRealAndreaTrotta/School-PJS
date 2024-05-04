import time

def stampa_con_intervallo(frase, intervallo):
    parole = frase.split()
    for parola in parole:
        print(parola, end=" ", flush=True)
        time.sleep(intervallo)
    print()  # Stampa una riga vuota alla fine

frase = "Stampo una frase con intervallo di tempo."
intervallo =  0.3 # Intervallo di tempo in secondi

stampa_con_intervallo(frase, intervallo)