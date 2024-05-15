def even_between(a, b):
    even_list = []
    for number in range(a+1, b):
        if number%2==0:
            even_list.append(number)
    return even_list