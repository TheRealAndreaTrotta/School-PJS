#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 12
#define MIN 1

void welcome(void){
    printf("+--------------------------------------------------------+\n");
    printf("+                WELCOME TO THE DICE HOUSE!              +\n");
    printf("+--------------------------------------------------------+\n");
}

int main(void){
    srand(time(NULL));

    welcome();

    int dice_1 = 0, dice_2 = 0, dice_sum = 0;
    int wallet = 0, bet = 0;

    int max = MAX, min = MIN;

    printf("+ How much do you want put on the table? ");
    scanf("%d", &wallet);

    if(wallet > 0){
        do{
            printf("+ How much do you want to bet? ");
            scanf("%d", &bet); 
            if(bet > 0){
                dice_1 = rand()%(max-min+1)-min;
                dice_2 = rand()%(max-min+1)-min;
                dice_sum = dice_1 + dice_2;

                printf("+ Dice: %d\n", dice_sum);
                //Condition to win.
                if((dice_sum == 12) || (dice_sum == 7)){
                    printf("+ Congratulations! You won!\n");
                    wallet += bet;
                }
                else{
                    printf("+ House wins! You lose!\n");
                    wallet -= bet;
                }
            }
        //Condition for continuing the game.
        }while((bet > 0) && (wallet > 0));
    }

    return 0;
}