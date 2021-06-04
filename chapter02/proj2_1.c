/*
 * Escribir un programa que calcule el viaje en taje en un ratio de 
 * $1,5 por milla.
 */

#include <stdio.h>

#define rate 1,50

int main()
{
    float odom_init, odom_end, fare, cost;

    /* Introduce los datos del taxímetro */
    printf("Introduce la lectura inicial del taximetro: \n");
    scanf("%f", &odom_init); /* Inicio del viaje */
    printf("Introduce la lectura final del taximetro: \n");
    scanf("%f", &odom_end);

    /* Calcula la trayectoria realizada */
    fare = odom_init - odom_end;
    
    /* Calcula el coste del viaje */
    cost = fare * rate;

    /* Muestra los resultados */
    printf("Ha recorrido una distancia de %f miles.\n", fare);
    printf("A $1,50 por milla, el precio es de: %f\n", cost);

    return 0;

}
