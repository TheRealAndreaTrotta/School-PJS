import myfunctions

myfunctions.welcome()
sentence = input("+ Please, write something: ")

cript_sentence = ''
for character in sentence:
    if character.isalpha():
        shifted = ord(character) + 13
        if character.islower():
            if shifted > ord('z'):
                shifted -= 26
        elif character.isupper():
            if shifted > ord('Z'):
                shifted -= 26
        cript_sentence += chr(shifted)
    else:
        cript_sentence += character

print(f"+ {cript_sentence}")
myfunctions.endl()
