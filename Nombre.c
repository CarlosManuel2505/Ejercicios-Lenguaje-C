#include <stdio.h>

int main(int argc, char *argv[]) {
	char nombre[20];
	printf("Ingresa tu nombre\n");
	fgets(nombre, sizeof(nombre), stdin);
	printf("\n%s", nombre);
	return 0;
}

