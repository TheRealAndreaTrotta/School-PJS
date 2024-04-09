import random

choice = input("Head or Tail? ").lower()

options = ['Head', 'Tail']
result = random.choice(options)

if(choice == result):
    print(f"You Won! He's out {result}")
else:
    print(f"You Lose! He's out {result}")