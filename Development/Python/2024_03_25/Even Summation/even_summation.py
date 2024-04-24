'''
scrivi una funzione che prenda in input una lista di numeri interi e restituisca 
la somma di tutti i numeri pari presenti nella lista
'''

def even_summation(numbers):
    sum = 0

    for i in numbers:
        if(i % 2 == 0):
            sum += i
    
    return sum

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print('Sum: ', even_summation(numbers))