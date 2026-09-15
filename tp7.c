// https://github.com/Nazaplugg/tp3/tree/tp7

#include <stdio.h>
#define TAM 5
#define MAX_CODIGO 999999999

int main() {
	int codigos[TAM];
	float precios[TAM];
	
	int i;
	int mayor = 0;
	int menor = 0;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio:\n\n", TAM);
	
	for (i = 0; i < TAM; i++) {
		
		do {
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigos[i]);
			
			if (codigos[i] < 1 || codigos[i] > MAX_CODIGO) {
				printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
			}
			
		} while (codigos[i] < 1 || codigos[i] > MAX_CODIGO);
		
		do {
			printf("Ingrese el precio: ");
			scanf("%f", &precios[i]);
			
			if (precios[i] < 0) {
				printf("Error. El precio no puede ser negativo\n");
			}
			
		} while (precios[i] < 0);
		
		printf("\n");
	}
	
	for (i = 1; i < TAM; i++) {
		
		if (precios[i] > precios[mayor]) {
			mayor = i;
		}
		
		if (precios[i] < precios[menor]) {
			menor = i;
		}
	}
	
	printf("Codigo\tPrecio\n");
	
	for (i = 0; i < TAM; i++) {
		printf("%9d\t%8.2f\n", codigos[i], precios[i]);
	}
	
	printf("\nMas caro: [%d] %.2f\n", codigos[mayor], precios[mayor]);
	printf("Mas barato: [%d] %.2f\n", codigos[menor], precios[menor]);
	
	return 0;
}
