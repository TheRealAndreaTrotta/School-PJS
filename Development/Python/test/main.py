def test(word):
    if word.isalpha() == False:
        return False
    
    nw = []; counter = 0
    for character in word:
        nw.append(character.upper() + character.lower() * counter)
        counter += 1
    
    return '-'.join(nw)

print(test('ciao'))
