#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/********************************************************************************
*	Pour lancer le programme gcc misteryNumber.c -o nomDuFichierExecutable	*
*********************************************************************************/

void printGameIntro();

void printGameEnd(int, int);

int main() {
	srand(time(NULL));	// initialise le générateur de nombres aléatoires
	
	const int MAX = 100;
	const int  MIN = 1;
	int misteryNumber = (rand() % (MAX - MIN + 1)) + 1;
	int number = 0;
	int counter = 0;

	printGameIntro();
		
	do {
		printf("Veuillez rentrer unnombre entre 1 et 100 : ");
		scanf("%d", &number);
		printf("\n\n");

		counter++;
		
		if(number > misteryNumber)
			printf("%d n'est pas le nombre mystère, cherche un nombre plus petit \n", number);
		else if(number < misteryNumber)
			printf("%d n'est pas le nombre mystère, cherche un nombre plus grand \n", number);
	} while(number != misteryNumber);

	printGameEnd(number, counter);

	return 0;	
}

void printGameIntro() {
        printf("\n");
        printf("Bienvenu dans le jeu du nombre mystère ! \n");
        printf("Un nombre mystère a été choisi aléatoirement par l'ordinateur \n");
        printf("Votre mission est de le retrouver \n");
}

void printGameEnd(int number, int counter) {
        printf("Bravo vous avez trouvé le nombre mystère ! : %d \n", number);
        printf("Il vous à fallu %d coups pour trouver le résultat \n", counter);
}
