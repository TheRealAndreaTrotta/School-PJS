def solution(number):
    return 0 if number < 0 else sum(x for x in range(number) if x%3 == 0 or x%5 == 0 )
