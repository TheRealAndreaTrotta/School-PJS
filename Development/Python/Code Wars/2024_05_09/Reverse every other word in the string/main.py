def reverse_alternate(string):
    words = string.strip().split()
    for i in range(len(words)):
        if i % 2 == 1:
            words[i] = words[i][::-1]
    return ' '.join(words)
