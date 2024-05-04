import random

def welcome():
    print("+------------------------------------------------------------------+")
    print("+                    WHO WILL PAY THIS TIME?                       +")
    print("+------------------------------------------------------------------+")

def endl():
    print("+------------------------------------------------------------------+")

welcome()

players = []
number_of_person = int(input("+ How many people do you want to include? | "))

for person in range(1, number_of_person + 1):
    players.append(input(f"+ Player({person}): "))
print(f"+ {random.choice(players)} will pay the bill! \n+ Thank you for playing!")

endl()