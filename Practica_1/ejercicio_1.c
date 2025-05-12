/*
* Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   ejercio_1.c
 * Author: anahijaramillo
 *
 * Created on 4 de mayo de 2025, 13:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    // Declarar variables 
    int distancia = 0;
    int consumo = 0.;
    double precio = 0.0;
    double costo = 0.0;
    printf("Ingrese la distancia a recorrer (km):");
    // Asignando la  distacia a la variable 
    scanf("%d", &distancia);
    printf("Ingrese el consumo (km/l):");
    // Asignando el consumo a la variable 
    scanf("%d", &consumo);

    printf("Ingrese el precio ($/l):");
    // Asignando el precio  a la variable
    scanf("%lf", &precio);

    costo = (distancia * precio) / consumo;

    //Presentar resultado
    printf("El costo del viaje es: %.2lf $", costo);


    return (EXIT_SUCCESS);
}
