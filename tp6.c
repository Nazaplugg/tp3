#include <stdio.h>
#define PI 3.14159265359

float calcularAreaRectangulo(float longitud_rec , float alt_rec);
float calcularPerimetroRectangulo(float longitud_rec , float alt_rec);
float calcularAreaCirculo(float radio_circ);
float calcularPerimetroCirculo(float radio_circ);
void imprimirResultados (float area , float perimetro, int figura);

int main(int argc, char *argv[]) {
	int figura = 0;
	float longitud_rec = 0;
	float alt_rec = 0;
	float area_rec = 0;
	float per_rec = 0;
	float radio_circ = 0;
	float area_circ = 0;
	float per_circ = 0;
	
do{
	printf("Ingrese la figura que desea calcular: \n");
	printf("1: Rectangulo\n");
	printf("2: Circulo\n");
	scanf("%d", &figura);
	
	if(figura == 1){
		printf("\nOpción de rectángulo seleccionada \n");
		printf("\nIngrese la longitud del rectángulo: ");
		scanf("%f", &longitud_rec);
		printf("\nIngrese la altura del rectángulo: ");
		scanf("%f", &alt_rec);

		area_rec = calcularAreaRectangulo(longitud_rec, alt_rec);
		per_rec = calcularPerimetroRectangulo(longitud_rec, alt_rec);
		imprimirResultados(area_rec, per_rec, figura);
		
	}
	else if (figura == 2){
		printf("\nOpción de circulo seleccionada \n");
		printf("\nIngrese el radio del circulo: ");
		scanf("%f", &radio_circ);
		area_circ = calcularAreaCirculo(radio_circ);
		per_circ = calcularPerimetroCirculo(radio_circ);
		imprimirResultados(area_circ, per_circ, figura);
		
	}
	else{
		printf("\nValor invalido. Por favor lea bien e ingrese un número de nuevo\n");
	}
}while (figura!= 1 && figura!= 2);

	return 0;
}

float calcularAreaRectangulo(float longitud_rec , float alt_rec){
	float area = longitud_rec * alt_rec;
	
	return area;
}
	
float calcularPerimetroRectangulo(float longitud_rec , float alt_rec){
	float perimetro = 2 * (longitud_rec + alt_rec);
	
	return perimetro;
}
	
float calcularAreaCirculo(float radio_circ){
	float area = (radio_circ * radio_circ) * PI;
	
	return area;
	}
	
float calcularPerimetroCirculo(float radio_circ){
	float perimetro = 2 * radio_circ * PI;
	
	return perimetro;
	}

void imprimirResultados (float area , float perimetro, int figura){
	if(figura == 1){
		printf("\nEl área del rectángulo es: %.2f\n", area);
		printf("\nEl perímetro del rectángulo es: %.2f", perimetro);
	}
	if(figura == 2){
		printf("\nEl área del circulo es: %.2f\n", area);
		printf("\nEl perímetro del circulo es: %.2f", perimetro);
	}
	return;
}
