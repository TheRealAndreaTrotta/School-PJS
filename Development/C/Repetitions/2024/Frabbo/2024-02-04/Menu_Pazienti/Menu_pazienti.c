/*
Dato un file:

10   --> numero di pazienti dell'ospedale
36.7 37.2 37.5 37.4 --> temperature paziente 1 alle ore 8,  12, 16, 20
35.8 36.0 36.2 36.1 --> temperature paziente 2 alle ore 8,  12, 16, 20
.......


PS: i medici considerano normale la temperatura fino a 37.0

Scrivere il programma C che:
1) Visualizza, per ogni paziente, la temperatura media e massima del giorno
2) Visualizzi i pazienti che hanno avuto la febbre
3) Letto da tastiera un orario (8,12,16 o 20) Visualizzi i pazienti che non avevano la febbre a quell'ora


2
36.7 37.2 37.5 37.4
35.8 36.0 36.2 36.1


*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int npazienti = 0;
FILE *fr;

void febbre() {
	double t1, t2, t3, t4;
	for (int i = 0; i < npazienti; ++i) {
		fscanf(fr, "%lf %lf %lf %lf", &t1, &t2, &t3, &t4);
		double media = (t1 + t2 + t3 + t4) / 4.0;
		printf("paziente %3d: media temperatura = %4.1lf  ", i + 1, media);
		double max = t1;
		if (t2 > max) max = t2;
		if (t3 > max) max = t3;
		if (t4 > max) max = t4;
		printf("massima temperatura = %4.1lf\n", max);
	}
}


void temperature() {
	double t[4];
	bool f;
	int j;
	for (int i = 0; i < npazienti; ++i) {
		f = false;
		for ( j = 0; j < 4; j++)
			fscanf(fr, "%lf", &t[j]);
			
		for( j = 0; j < 4; j++)
			if (t[j] > 37.0)
				f = true;
				
		if(f)
			printf("\npaziente %3d: Ha avuto la febbre!", i + 1);
		else
			printf("\npaziente %3d: Non ha avuto la febbre!", i + 1);
	}
}


void orario() {
	int ora;
	double t[5];
	printf("\nInserisci orario |ore 8 (digita 1)|ore 12 (digita 2)|ore 16 (digita 3)|ore 20 (digita 4)|: ");
	scanf("%d", &ora);
	int Ora[] = {0, 8, 12, 16, 20};
	printf("\nAlle ore %d:", Ora[ora]);
	for (int i = 0; i < npazienti; ++i) {
		// ciclo per leggere le righe del paziente
		for (int j = 1; j < 5; j++) 			// ciclo per leggere le temperature di ogni paziente
			fscanf(fr, "%lf", &t[j]);
		for (int j = 1; j < 5; j++) 			// ciclo per controllare la febbre
			if (t[j] <= 37.0 && j == ora)
				printf("\npaziente %3d: Non ha avuto la febbre!", i + 1);
	}
}

void aprifile() {
	fr = fopen("pazienti.txt", "r");
	if (fr == NULL) {
		printf("Non e' stato possibile aprire il file pazienti.txt\n");
		exit(0);
	}
	fscanf(fr, "%d", &npazienti);
}

void menu() {
	int scelta;

	do {
		system("cls");
		aprifile();
		printf("\n\nMENU':\n1) Visualizza, per ogni paziente, la temperatura media e massima del giorno");
		printf("\n2) Visualizzi i pazienti che hanno avuto la febbre");
		printf("\n3) Letto da tastiera un orario (8,12,16 o 20) Visualizza i pazienti che non avevano la febbre a quell'ora\n");
		printf("0 per uscire \n");
		printf("Digita: ");
		scanf("%d", &scelta);
		switch (scelta) {
			case 0:
				break;
			case 1:
				febbre();
				break;
			case 2:
				temperature();
				break;
			case 3:
				orario();
				break;
			default:
				printf("Scelta errata.\n");
		}
		fclose(fr);
		printf("\n");
		system("pause");
	} while (scelta != 0);
}


int main() {
	menu();
	return 0;
}