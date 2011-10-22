#include <stdio.h>
#include <stdlib.h>

int customStrlen(const char* chaine);

int main() {
	char string[100];
	printf("taper un mot, nous vous dirons sa longueur : ");
	scanf("%s", string);
	printf("\n");	

	printf("la chaine de caractère '%s' a une longueur de %d\n", string, customStrlen(string));
	return 0;
}

int customStrlen(const char* string) {
	char currentChar = 0;
	int stringLength = 0;

	do {
		currentChar = string[stringLength];
		stringLength++;
	} while(currentChar != '\0');

	return --stringLength;
}
