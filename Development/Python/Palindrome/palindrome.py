#Scrivi un programma Python che chieda all'utente di inserire una parola e verifichi se è un palindromo o meno. 
#Un palindromo è una parola che si legge allo stesso modo da sinistra a destra e da destra a sinistra.

def is_palindrome(word):
    word = word.replace(' ', '').lower()
    
    if word == word[::-1]:
        print("The word is a palindrome")
    else:
        print("The word is not a palindrome")

word = input("Please, write a word: ")
is_palindrome(word)