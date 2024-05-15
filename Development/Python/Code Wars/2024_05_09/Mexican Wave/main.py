def wave(string):
    wave_list = []
    for i in range(len(string)):
        if string[i].isspace():
            continue
        wave_list.append(string[:i] + string[i].upper() + string[i+1:])
    return wave_list