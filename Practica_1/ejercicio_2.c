/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   jercicio_2.c
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
    int personas = 0;
    const int harina = 50;
    int total = 0;
    //datos de entrdas
    printf("Ingresar el numero de personas: ") ;
    scanf("%d", &personas);

    total = personas * harina;
    //Presentar los resultados
    printf("El total de la harina es: %d g", total);
    return (EXIT_SUCCESS);
}

