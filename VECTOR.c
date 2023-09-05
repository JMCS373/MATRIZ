#include <stdio.h>
#include <stdbool.h>

void invertirOrden(int v[], int tam){
    for (int i=0 ; i< tam/2 ; ++i){
        int aux = v[i];
        v[i] = v[tam - 1 - i];
        v[tam - 1 - i ] = aux;
    }
}

int pedirEntero(int inf, int sup, const char mensaje[]) {
int valor;
do {
printf("Introduzca el %s: ", mensaje);
if (scanf("%d", &valor) != 1) 
{
while (getchar() != '\n'); // Limpiar el búfer de entrada
printf("\nERROR: %s fuera de rango o no es un numero valido.\n", mensaje);
} else if (valor > sup || valor < inf) { 
    printf("\nERROR: %s fuera de rango.\n", mensaje);
} 
} while (valor > sup || valor < inf); 
return valor;
}

int main(){
// Pedir al usuario el número de elementos para el arreglo 
int tam = pedirEntero(1, 100, "numero de elementos del vector");
// Declarar un arreglo de tamaño especificado por el usuario 
int v[tam];
// Solicitar al usuario que ingrese los elementos del arreglo 
for (int i = 0; i < tam; ++i) { 
printf("v[%d]", i); 
if (scanf("%d", &v[i]) != 1) {
while (getchar() != '\n'); 
// Limpiar el búfer de entrada 
printf("ERROR: Entrada no valida. Introduzca un numero.\n"); 
--i; // Volver a pedir el valor
}
}
// Llamar a la función para invertir el orden del arreglo 
invertirOrden(v, tam);
// Mostrar el arreglo invertido en la pantalla 
printf("Vector invertido:\n"); 
for (int i = 0; i < tam; ++i) { printf("%d ", v[i]); }
printf("\n");
return 0; // Terminar el programa con un código de salida 0 (éxito)
}

