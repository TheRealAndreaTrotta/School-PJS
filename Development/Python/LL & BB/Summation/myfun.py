import random

def summation(numbers):
    return sum(x for x in numbers)

def fill(empty_list):
    filled_list = []
    for _ in range(len(empty_list)):
        filled_list.append(random.randint(1, 10))
    return filled_list
