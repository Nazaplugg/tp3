#include <stdio.h>

int main() {
	float peso, altura, bmi;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	
	printf("\nIngrese la altura en metros: ");
	scanf("%f", &altura);
	
	bmi = peso / (altura * altura);
	
	printf("\n\nSu indice de masa corporal es: %.2f\n\n", bmi);
	
	printf("    Indice    |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5     |  Bajo peso\n");
	printf(" 18.5 a 24.9  |  Normal\n");
	printf(" 25.0 a 29.9  |  Sobrepeso\n");
	printf("    >=30      |  Obesidad\n");
	
	if (imc < 18.5)
		printf("Su condicion es: Bajo peso\n");
	else if (imc < 25)
		printf("Su condicion es: Peso normal\n");
	else if (imc < 30)
		printf("Su condicion es: Sobrepeso\n");
	else
		printf("Su condicion es: Obesidad\n");
	
	return 0;
}
