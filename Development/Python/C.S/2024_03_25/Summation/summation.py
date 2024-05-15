'''
scrivi una funzione che prenda in input un numero intero e restituisca la somma 
dei numeri da 1 a quel numero incluso. Ad esempio, se l'input è 5, la funzione 
dovrebbe restituire 1 + 2 + 3 + 4 + 5 = 15.
'''

def summation(number):
    sum = 0
    for i in range(1, number+1):
        sum += i

    return sum

number = int(input('Please, enter a number: '))
print('The summation equal: ', summation(number))