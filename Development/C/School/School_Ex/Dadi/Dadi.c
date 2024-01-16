#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void welcome(void){
    printf("+----------------------------------+\n");
    printf("+              WELCOME             +\n");
    printf("+----------------------------------+\n");
}

int main(void){
    srand(time(NULL));
    welcome();

    int bet = 0, wallet = 0, dice1 = 0, dice2 = 0, dice12 = 0;
    int max = 12, min = 1;
    int flag = 0;

    printf("How much money do you have available? ");
    scanf("%d", &wallet);

    do{
        printf("How much do you bet? ");
        scanf("%d", &bet);

        if(bet > 0){
            dice1 = rand()%(max-min+1)+min;
            dice2 = rand()%(max-min+1)+min;
            dice12 = dice1 + dice2;

            printf("Dice: %d\n", dice12);

            if((dice12 == 12) || (dice12 == 7)){
                printf("You Won, congratulations!\n");
                wallet += bet;
            }   else {
                    printf("You Lose! House Won!\n");
                    wallet -= bet;
                    printf("Wallet: %d\n\n", wallet);
                }
        } else {
            flag = 1;
        }

    }while((flag == 0) || (wallet > 0));

    printf("Thank you for playing! Bye bye\n");

    return 0;
}