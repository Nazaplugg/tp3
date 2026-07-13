/*
TP4 - Punto 1
Repositorio Git: PEGAR_AQUI_EL_LINK_DE_TU_REPOSITORIO
*/

#include <stdio.h>

int main() {
	int cantidad, i;
	float nota;
	float suma = 0, promedio;
	float mayor, menor;
	
	// Validar cantidad de estudiantes
	do {
		printf("Ingrese la cantidad de estudiantes: ");
		scanf("%d", &cantidad);
		
		if (cantidad <= 0) {
			printf("Error. La cantidad debe ser un numero positivo.\n");
		}
		
	} while (cantidad <= 0);
	
	// Ingreso y validación de notas
	for (i = 1; i <= cantidad; i++) {
		
		do {
			printf("Ingrese la calificacion del estudiante %d (0-100): ", i);
			scanf("%f", &nota);
			
			if (nota < 0 || nota > 100) {
				printf("Error. La calificacion debe estar entre 0 y 100.\n");
			}
			
		} while (nota < 0 || nota > 100);
		
		suma += nota;
		
		// Inicializar mayor y menor con la primera nota
		if (i == 1) {
			mayor = nota;
			menor = nota;
		} else {
			if (nota > mayor) {
				mayor = nota;
			}
			
			if (nota < menor) {
				menor = nota;
			}
		}
	}
	
	promedio = suma / cantidad;
	
	printf("\n----- RESULTADOS -----\n");
	printf("Promedio: %.2f\n", promedio);
	printf("Calificacion mas alta: %.2f\n", mayor);
	printf("Calificacion mas baja: %.2f\n", menor);
	
	return 0;
}
