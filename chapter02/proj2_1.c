/*
 * Escribir un programa que calcule el viaje en taje en un ratio de 
 * $1,5 por milla.
 */

#include <stdio.h>

#define rate 1.50

int main()
{
    float odom_init, odom_end, fare, cost;

    /* Introduce los datos del taxímetro */
    printf("Introduce la lectura inicial del taximetro: \n");
    scanf("%f", &odom_init); /* Inicio del viaje */
    printf("Introduce la lectura final del taximetro: \n");
    scanf("%f", &odom_end);

    /* Calcula la trayectoria realizada */
    fare = odom_end - odom_init;
    
    /* Calcula el coste del viaje */
    cost = fare * rate;

    /* Muestra los resultados */
    printf("Ha recorrido una distancia de %.1f millas.\n", fare);
    printf("A $1,50 por milla, el precio es de: $%.2f \n", cost);

    return 0;

}
