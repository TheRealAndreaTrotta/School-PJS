#include <stdio.h>
#include <stdbool.h>

void welcome(void){
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("+                                   VALIDATORE DI DATA                                      +\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
}

void caricamento() {
    int zzz; // zzz? Si il computer nei caricamenti sa come prendersela comoda!
    char caricamento[] = {'C', 'a', 'r', 'i', 'c', 'a', 'm', 'e', 'n', 't', 'o',' ','i' , 'n',' ','c', 'o', 'r', 's', 'o'}; 
    char sl[] = {'|', '/', '-', '|', '/', '-'};

    for (zzz = 0; zzz < 20; zzz ++) {
        printf("%c", caricamento[zzz]);
        fflush(stdout); // Per assicurarsi che il testo venga stampato immediatamente (consigliato da un amico).
        usleep(300000); // Attendi 300 millisecondi (0.3 secondi).
    }

    printf("\t");

    for (int ash = 0; ash < 6; ash++) {
        printf("\b%c", sl[ash]);
        fflush(stdout);
        usleep(300000);
    }

    printf("\n+ Caricamento completato con successo!\n+\n");
}

bool anno_bisestile(int anno){
    return ((anno % 4 == 0) && (anno % 100 != 0) || (anno % 400 == 0));
}

bool verifica_data(int giorno, int mese, int anno){
    if(anno < 0){ // Verifico se l'anno è minore di 0.
        return false;
    }
    if((mese < 1) || (mese > 12)){ // Verifico se il mese è tra 1 e 12.
        return false;
    }

    int giorni_nei_mesi[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // "Lunghezza" dei mesi.

    if (anno_bisestile(anno)){
        giorni_nei_mesi[1] = 29; // Se l'anno è bisestile allora Febbraio ha 29 giorni!
    }
    if ((giorno < 1) || (giorno > giorni_nei_mesi[mese-1])){ // mesi-1 altrimenti non conta corettamente i mesi.
        return false;
    } 

    return true;
}

int main(void){
    int giorno = 0, mese = 0, anno = 0;

    welcome();

    printf("+ Prego, inserisca una data nel seguente formato [gg/mm/aaaa]:\n+ ");
    scanf("%d %d %d", &giorno, &mese, &anno);
    printf("+ ");
    caricamento(); // Simulazione di un caricamento.

    if(verifica_data(giorno, mese, anno)){
        printf("+ La data inserita risulta essere valida!\n");
    }
    else{
        printf("+ Oh oh, sembra che ci sia qualche problema con questa data!\n");
    }
    printf("+-------------------------------------------------------------------------------------------+\n");

    return 0;
}