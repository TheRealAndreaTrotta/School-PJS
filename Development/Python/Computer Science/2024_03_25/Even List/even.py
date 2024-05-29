'''
scrivi una funzione che prenda in input una lista di numeri interi e restituisca 
una nuova lista contenente solo i numeri pari della lista originale, mantenendo 
l'ordine relativo degli elementi.
'''

def even_list(list):
    even = []

    for number in num_list:
        if(numbers % 2 == 0):
            even.append(number)
    return even

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print('Even list: ', even_list(numbers))
