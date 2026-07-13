//Repositorio Git: https://github.com/Nazaplugg/tp03-bmi/tree/tp5

#include <stdio.h>

int main() {
	float peso, altura, bmi;
	
	// Validación del peso
	do {
		printf("Ingrese el peso en kg: ");
		scanf("%f", &peso);
		
		if (peso < 0) {
			printf("Error. No se permiten valores negativos.\n");
		}
		
	} while (peso < 0);
	
	// Validación de la altura
	do {
		printf("Ingrese la altura en metros: ");
		scanf("%f", &altura);
		
		if (altura < 0) {
			printf("Error. No se permiten valores negativos.\n");
		}
		
	} while (altura < 0);
	
	bmi = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);
	
	printf("    Indice    |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5     |  Bajo peso\n");
	printf(" 18.5 a 24.9  |  Normal\n");
	printf(" 25.0 a 29.9  |  Sobrepeso\n");
	printf("    >=30      |  Obesidad\n\n");
	
	if (bmi < 18.5)
		printf("Su condicion es: Bajo peso\n");
	else if (bmi < 25)
		printf("Su condicion es: Peso normal\n");
	else if (bmi < 30)
		printf("Su condicion es: Sobrepeso\n");
	else
		printf("Su condicion es: Obesidad\n");
	
	return 0;
}
