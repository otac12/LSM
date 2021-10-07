#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "palabra.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char *Oracion = (char *)malloc(sizeof(char));
	
	printf("Coloque una oracion : ");
	scanf("%s", Oracion);
	printf("Su oracion es : %s", Oracion);
	
	bool respuesta=verificacionoracion(Oracion);
	
	printf("%b",respuesta);
	

	
	return 0;
}
