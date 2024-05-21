def spin_words(sentence):
    words = sentence.split()

    spun_sentence = []
    for word in words:
        if len(word) >= 5:
            word = word[::-1]
        spun_sentence.append(word)
    return ' '.join(spun_sentence)

print(spin_words('ciao, mondooo, oggi programmo in python!'))