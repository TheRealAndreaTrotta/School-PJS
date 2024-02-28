#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define sz 29
#define MAX 15
#define MIN 1

// Function to display a welcome message.
void welcome(void){
    printf("+----------------------------------------------------------------------------------------------------+\n");
    printf("+                                            WELCOME!                                                +\n");
    printf("+----------------------------------------------------------------------------------------------------+\n");
}

// Function to fill an array with sz random integers between min and max.
void rand_arr(int array[], int min, int max){
    for(int i = 0; i < sz; i++){
        array[i] = rand() % (max - min + 1) + min;
    }
}

// Function to print the elements of an array.
void print_arr(int array[]){
    for(int i = 0; i < sz; i++){
        printf("%d, ", array[i]);
    }
}

// Function to sort an array.
void sort_arr(int array[]) {
    int pivout = 0;

    for (int i = 0; i < sz; i++) {
        for (int j = 0; j < sz - i - 1; j++) {
            if (array[j] > array[j+1]) {
                // Swap array[j] and array[j+1].
                pivout = array[j];
                array[j] = array[j+1];
                array[j+1] = pivout;
            }
        }
    }
}

// Function to delete duplicate elements in an array
void del_dup_arr(int array[]){
    int flag = 0;

    for(int i = 0; i < sz; i++){
        flag = array[i];
        for(int j = i + 1; j < sz; j++){
            if(array[j] == flag){
                array[j] = 0; // Mark duplicate element as 0
            }
        }
    }
}

int main(void){
    welcome();
    
    int numbers[sz], num[sz];
    int min = MIN, max = MAX, c = 0;

    // Generate random numbers and display the original array.
    rand_arr(numbers, min, max);
    printf("+\n+ Original array:\n+ ");
    print_arr(numbers);

    // Delete duplicates, sort the array, and copy non-zero elements to a new array.
    del_dup_arr(numbers);
    sort_arr(numbers);
    
    for(int i = 0; i < sz; i++){
        if(numbers[i] != 0){
            num[c] = numbers[i];
            c++;
        }
    }
    num[c] = '\0'; // Add a null terminator to the new array.

    // Display the modified array
    printf("\n+\n+ Modified array:\n+ ");
    for(c = 0; num[c] != '\0'; c++){
        printf("%d, ", num[c]);
    }

    printf("\n+\n+----------------------------------------------------------------------------------------------------+\n");

    return 0;
}
