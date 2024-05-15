import random
import os

def scoreboard(player_score, cpu_score):
    print("+--------------------------------------------------+")
    print("+               WELCOME TO RPS GAME!               +")
    print("+--------------------------------------------------+")
    print(f"+               {player_score} PLAYER VS JARVIS {cpu_score}               +")
    print("+--------------------------------------------------+")

def endl():
    print("+--------------------------------------------------+")

def choice():
    shapes = ['rock', 'paper', 'scissors']
    return random.choice(shapes)

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
    rock = '''+
+     _______
+ ---'   ____)__
+         (_____)
+         (_____)
+         (____)
+ ---.____(___)
+
+'''

    paper = '''+
+     _______
+ ---'   ____)____
+           ______)
+           _______)
+           _______)
+ ---.__________)
+
+'''

    scissors = '''+
+     _______
+ ---'   ____)____
+           ______)
+       __________)
+        (____)
+ ---.__(___)
+
+'''
    if chosen_shape == 'rock':
        print(rock, end='')
    elif chosen_shape == 'paper':
        print(paper, end='')
    else:
        print(scissors, end='')

def combat_sentence(result):
    if result == 1:
        print(" YOU WIN!")
    elif result == 0:
        print(" YOU LOSE!")
    else:
        print(" DRAW")

def clear_screen(decision):
    if decision in ['y', 'yes']:
        os.system('cls' if os.name == 'nt' else 'clear') 