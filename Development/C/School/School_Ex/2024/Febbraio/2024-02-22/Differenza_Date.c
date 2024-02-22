/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
anno b = /4 non per 100 ma per 400
Inserire due date GG/MM/YYYY visualizzare i giorni che intercorrono tra una data e l'altra
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTIONS
bool leap_year(int year);
bool verify_date(int day, int month, int year);

// PROGRAM
int main(void){
    welcome();

    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day, month, year;
    int flag = 0, data = 0;

    int difference[1];

    // Validatore
    for(int t=0; t<2; t++){
        printf("Please write the date [DD/MM/YYYY]: ");
        scanf("%d %d %d", &day, &month, &year);

        flag = verify_date(day, month, year);

        if(flag == true){
            month = month_days[month];
        }
        else{
            puts("+\tERROR: It looks like your dates is invalid");
            t--;
        }
    }

    
    endl();
    return 0;
}

void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                           WELCOME!                                 +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("+--------------------------------------------------------------------+");
}

bool leap_year(int year){
    return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}

bool verify_date(int day, int month, int year){
    if(year < 0){ // Verifico se l'anno è minore di 0.
        return false;
    }
    if((month < 1) || (month > 12)){ // Verifico se il mese è tra 1 e 12.
        return false;
    }

    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // "Lunghezza" dei mesi.

    if (leap_year(year)){
        month_days[1] = 29; // Se l'anno è bisestile allora Febbraio ha 29 giorni!
    }
    if ((day < 1) || (day > month_days[month-1])){ // mesi-1 altrimenti non conta corettamente i mesi.
        return false;
    } 

    return true;
}

