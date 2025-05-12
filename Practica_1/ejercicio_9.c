/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   ejercio_9.c
 * Author: anahijaramillo
 *
 * Created on 4 de mayo de 2025, 13:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
 int main() {
    // Declarar variables
    double peso = 0.0;

    // Solicitar datos
    printf("Ingrese el peso de la persona en kilogramos: ");
    scanf("%lf", &peso);

    if (peso < 18.5) {
        printf("Bajo Peso\n");
    } else if (peso <= 24.9) {
        printf("Normal\n");
    } else if (peso <= 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }

  
    
    return (EXIT_SUCCESS);
}

