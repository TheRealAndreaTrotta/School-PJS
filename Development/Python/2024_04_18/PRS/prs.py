import random

def combat(ply_choice, cpu_choice):
    if (ply_choice == 'paper' and cpu_choice == 'rock') or (ply_choice == 'rock' and cpu_choice == 'scissors') or (ply_choice == 'scissors' and cpu_choice == 'paper'):
        return 1
    elif (ply_choice == 'paper' and cpu_choice == 'paper') or (ply_choice == 'rock' and cpu_choice == 'rock') or (ply_choice == 'scissors' and cpu_choice == 'scissors'):
        return 2
    else:
        return 0

def combat_print(chosen_shape):
    if chosen_shape == 'rock':
        print(rock)
    elif chosen_shape == 'paper':
        print(paper)
    else:
        print(scissors)

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

shapes = ['rock', 'paper', 'scissors']

play_again = 'y'

while play_again.lower() == 'y' or 'yes':
    ply_choice = input("Write your choice (Rock-Paper-Scissors): ").lower()
    cpu_choice = random.choice(shapes)

    combat_print(ply_choice)
    combat_print(cpu_choice)

    result = combat(ply_choice, cpu_choice)

    if result == 1:
        print("YOU WIN!")
    elif result == 0:
        print("YOU LOSE!")
    else:
        print("DRAW")

    play_again = input("Do you want to play again? (yes/no): ")

print("Thanks for playing!")
