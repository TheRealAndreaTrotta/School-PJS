import random
import os

def combat(ply_choice, cpu_choice):
    if (ply_choice == 'rock' and cpu_choice == 'scissors') or \
       (ply_choice == 'paper' and cpu_choice == 'rock') or \
       (ply_choice == 'scissors' and cpu_choice == 'paper'):
        return 1
    elif ply_choice == cpu_choice:
        return -1
    else:
        return 0

def combat_print(chosen_shape):
    if chosen_shape == 'rock':
        print(rock)
    elif chosen_shape == 'paper':
        print(paper)
    else:
        print(scissors)

def combat_sentence(result):
    if result == 1:
        print("YOU WIN!")
    elif result == 0:
        print("YOU LOSE!")
    else:
        print("DRAW")

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

while play_again.lower() in ['y', 'yes']:
    combat_result = 0

    ply_choice = input("Write your choice (Rock-Paper-Scissors): ").lower()
    cpu_choice = random.choice(shapes)

    combat_print(ply_choice)
    print(f"Jarvis: I say {cpu_choice}!")
    combat_print(cpu_choice)

    combat_result = combat(ply_choice, cpu_choice)
    combat_sentence(combat_result)
    
    play_again = input("Do you want to play again? (yes/no): ")
    
    if play_again in ['y', 'yes']:
        os.system('cls' if os.name == 'nt' else 'clear') 

print("\nThanks for playing!")
