import  myfunctions

# Scrivi una funzione chiamata somma_pari che prenda in input due numeri interi a e b 
# (con a < b) e restituisca la somma di tutti i numeri pari compresi tra a e b inclusi.

num_0 = int(input("Please, enter the first number: "))
num_1 = int(input("Please, enter the second number: "))

if num_1 < num_0:
    print("ERROR: The first number is greater than second")
    while(num_1 <= num_0):
        num_1 = int(input("Please, enter the second number: "))

even_list = myfunctions.even_between(num_0, num_1)
print(even_list)