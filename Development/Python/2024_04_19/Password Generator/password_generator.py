import random

def welcome():
    print("+-----------------------------------------------------------------------------------------+")
    print("+                         WELCOME TO THE PY-PASSWORD GENERATOR!                           +")
    print("+-----------------------------------------------------------------------------------------+")

def endl():
    print("+-----------------------------------------------------------------------------------------+")


def main():
    welcome()

    letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', \
    'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', \
    'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

    numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

    nr_letters = int(input("+ How many letters would you like in your password? ")) 
    nr_symbols = int(input("+ How many symbols would you like? "))
    nr_numbers = int(input("+ How many numbers would you like? "))

    ran_letters = []
    ran_symbols = []
    ran_numbers = []

    for character in range(0, nr_letters):
        ran_letters.append(random.choice(letters))  

    for character in range(0, nr_symbols):
        ran_symbols.append(random.choice(symbols)) 

    for character in range(0, nr_numbers):
        ran_numbers.append(random.choice(numbers)) 

    unified_list = ran_letters + ran_numbers + ran_symbols
    random.shuffle(unified_list)

    password = ""

    for character in unified_list:
        password += character

    print(f"+ Your password has been generated: {password}")
    endl()

main()