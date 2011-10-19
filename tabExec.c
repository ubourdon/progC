#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tabSum( int tab[], int tabLength );
double averageTab( int tab[], int tabLength );
int* maxTab( int tab[], int tabLength, int maxValue );
int* orderingDecreaseTab( int tab[], int tabLength, int tabResult[] );
void printTab( int tab[], int tabLength );

int main() {
	int tab[4] = {1,2,3,4};
	int result[4];	
	
	printf( "test1 somme des éléments d'un tableau {1,2,3,4} => résultat attendu : 10\n" );
	printf( "résultat 1 : %d\n", tabSum( tab, 4 ) );

	printf( "test2 moyenne des éléments d'un tableau {1,2,3,4} => résultat attendu : 2.5\n" );
	printf( "résultat 2 : %f\n", averageTab( tab, 4 ) );

	printf("test3 mettre à zéro tous les éléments supérieurs à 2 d'un tableau {1,2,3,4} => résultat attendu : {1,2,0,0}\n");
	printf( "résultat 3 : " );
	printTab ( maxTab( tab, 4, 2 ), 4 );
	printf("\n");

	int tab2[4] = {1,2,3,4};

	printf("test4 ranger les éléments d'un tableau {1,2,3,4} dans l'ordre décroissant => résultat attendu : {4,3,2,1}\n");
	printTab( orderingDecreaseTab( tab2, 4, result ), 4 );
	printf("\n");

	return 0;
}

int tabSum( int tab[], int tabLength ) {
	int i, result = 0;
	
	for( i=0; i<tabLength; i++ )
		result += tab[i];

	return result;
}

double averageTab( int tab[], int tabLength ) {
	int i;
	double result = 0;
	result = (double) tabSum(tab, tabLength);
	return result/tabLength;
}

int* maxTab( int tab[], int tabLength, int maxValue ) {
	int i;
	for( i=0; i<tabLength; i++ ) {
		if( tab[i] > maxValue )
			tab[i] = 0;
	}
	return tab;
}

int* orderingDecreaseTab( int tab[], int tabLength, int tabResult[] ) {
	int i, j;

	for( i=0; i<tabLength; i++ ) {
		int supCount = 0, minCount = 0;
		
		for( j=0; j<tabLength; j++) {
			//printf("$$$ test tab[%d/i]: %d - tab[%d/j]: %d\n",i, tab[i], j, tab[j]);
			if( i != j ) {
			if( tab[i] < tab[j] ) {
				supCount++;
			}
			}
		}
		
		tabResult[supCount] = tab[i];
		//printf("sub count result for i: %d = %d\n", i, supCount);	
	}

	return tabResult;
}

void printTab( int tab[], int tabLength ) {
	int i;
	printf("{");

	for( i=0; i<tabLength; i++ ) {
		printf( "%d", tab[i] );
		if( i != tabLength - 1 )
			printf(",");	
	}

	printf("}");
}
