#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/********************************************************************************
*	Pour lancer le programme gcc misteryNumber.c -o nomDuFichierExecutable	*
*********************************************************************************/
int main() {
	srand(time(NULL));	// initialise le générateur de nombres aléatoires
	
	const int MAX = 100;
	const int  MIN = 1;
	int misteryNumber = (rand() % (MAX - MIN + 1)) + 1;
	int number = 0;
	int counter = 0;

	printf("\n");
	printf("Bienvenu dans le jeu du nombre mystère ! \n");
	printf("Un nombre mystère a été choisi aléatoirement par l'ordinateur \n");
	printf("Votre mission est de le retrouver \n");
		
	do {
		printf("Veuillez rentrer unnombre entre 1 et 100 : ");
		scanf("%d", &number);
		printf("\n\n");

		counter++;
		
		if(number > misteryNumber)
			printf("%d n'est pas le nombre mystère, il est plus petit \n", number);
		else if(number < misteryNumber)
			printf("%d n'est pas le nombre mystère, il est plus grand \n", number);
	} while(number != misteryNumber);

	printf("Bravo vous avez trouvé le nombre mystère ! : %d \n", number);
	printf("Il vous à fallu %d coups pour trouver le résultat \n", counter);

	return 0;	
}
