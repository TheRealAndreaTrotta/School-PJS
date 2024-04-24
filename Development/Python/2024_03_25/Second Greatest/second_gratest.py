def second_greatest(list):
    sorted_list = sorted(list, reverse = True)
    return sorted_list[1]

numbers = [10, 5, 8, 20, 15, 60, 14, 12, 28, 31]

#print('List: ', numbers)
print('The second greatest number is: ', second_greatest(numbers))
