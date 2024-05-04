character = input("Please, write a character: ")
word = "Fish"

if character.lower() in word.lower():
    print(f"Yep, '{character}' is in {word}")
else:
    print(f"Nop, '{character}' is in {word}")