def Fibonacci(number):
    fibonacci_sequence = [0, 1]

    for i in range(2, number):
        fibonacci_sequence.append(fibonacci_sequence[-1] + fibonacci_sequence[-2])

    return fibonacci_sequence


number = int(input("Please, enter a number: "))
print(Fibonacci(number))