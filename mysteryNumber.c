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
	int counter = 1;

	printf("\n");
	printf("Bienvenu dans le jeu du nombre mystère ! \n");
	printf("Un nombre mystère a été choisi aléatoirement par l'ordinateur \n");
	printf("Votre mission est de le retrouver \n");

	printf("Veuillez rentrer un nombre en 1 et 100 : \n");
	scanf("%d", &number);

	while(number != misteryNumber) {
		if(number > misteryNumber) {
			printf("%d n'est pas le nombre mystère, il est plus petit \n", number);
		} else if(number < misteryNumber) {
			printf("%d n'est pas le nombre mystère, il est plus grand \n", number);
		}

		printf("Veuillez rentrer un nombre entre 1 et 100 : \n");
		scanf("%d", &number);
		counter++;
	}

	printf("Bravo vous avez trouvé le nombre mystère ! : %d \n", number);
	printf("Il vous à fallu %d coups pour trouver le résultat \n", counter);

	return 0;	
}
