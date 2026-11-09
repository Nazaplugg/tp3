//https://github.com/Nazaplugg/tp3/tree/tp8.c

#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int cuantas_piezas(int);

int rectificable(float, float);

int rechazada(float, float);

void cargar_piezas(float *, int);

int contar(int (*)(float, float), float, float *, int);

float* reserva_memoria(int);

void segregar(int (*)(float, float), float, float *, int, float *);

void mostrar_piezas(char *, float *, int);

int main (void) {
	float diametros[TAM] = {0};
	int n;
	float max = 12;
	float min = 10;
	n = cuantas_piezas(TAM);
	cargar_piezas(diametros, n);
	int n_rectificar = contar(rectificable, max, diametros, n);
	float *p_rectificables = reserva_memoria(n_rectificar);
	segregar(rectificable, max, diametros, n, p_rectificables);
	int n_rechazar = contar(rechazada, min, diametros, n);
	float *p_rechazadas = reserva_memoria(n_rechazar);
	segregar(rechazada, min, diametros, n, p_rechazadas);
	mostrar_piezas("rectificables", p_rectificables, n_rectificar);
	mostrar_piezas("rechazadas", p_rechazadas, n_rechazar);
	return 0;
}
int cuantas_piezas(int max) {
	int n;
	do {
		printf("Cuántas piezas ingresará? ");
		scanf("%d", &n);
	} while (n < 0 || n > max);
	return n;
}
int rectificable(float diametro, float valor) {
	if (diametro > valor)
		return 1;
	else
		return 0;
}
int rechazada(float diametro, float valor) {
	if (diametro < valor)
		return 1;
	else
		return 0;
}
void cargar_piezas(float *p, int n){
	
	float diametro;
	
	for(int i = 0; i < n; i++){
		do{
			printf("Ingrese el diametro de la pieza %d: ", i+1);
			scanf("%f", &diametro);
			
			if(diametro<=0){
				printf("Error. El diametro ingresado debe ser positivo.\n");
			}
			
		} while(diametro<=0);
		
		*(p + i) = diametro;
	}
	
}
int contar(int (*criterio)(float, float), float valor, float *p, int n){
	
	int contador = 0;
	
	for(int i = 0; i < n; i++){
		if(criterio(*(p+i), valor) == 1){
			contador++;
		}
	}
	return contador;
}
float* reserva_memoria(int n){
	float *p;
	p = (float*) malloc(n *sizeof(float));
	
	if(p == NULL){
		printf("Error: no se pudo reservar memoria.\n");
	}
	return p;
}
void segregar(int (*criterio)(float, float), float valor, float *p, int n, float *q){
	int j = 0;
	for(int i = 0; i < n; i++){
		if(criterio(*(p+i),valor) == 1){
			*(q + j) = *(p + i);
			j++;
		}
	}
}
void mostrar_piezas(char *mensaje, float *p, int n){
	
	printf("\nPiezas %s:\n", mensaje);

	for(int i = 0; i < n; i++){
		printf("\nDiametro: %.2f\n", *(p + i));
	}
}
