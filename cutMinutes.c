#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void cutMinute(int* hour, int* minute);

void main() {
	int hour = 0, minute = 0;
	printf("rentre un nombre en minutes qui sera transformer en heures et minutes : ");
	scanf("%d", &minute);
	printf("\n");

	cutMinute(&hour, &minute);

	printf("le résultat est : %d h %d minutes\n", hour, minute);
}

void cutMinute(int* hour, int* minute) {
	*hour = *minute / 60;
	*minute = *minute % 60;
}
