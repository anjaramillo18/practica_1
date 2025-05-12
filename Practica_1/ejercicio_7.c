/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   ejercio_7.c
 * Author: anahijaramillo
 *
 * Created on 4 de mayo de 2025, 13:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
// Declarar variables 
    double t_original = 0;
    double t_nueva = 0;
    double  ti_original = 0;
    double ti_nuevo_calculado = 0;
    
    // Solicitar datos
    printf("Ingrese la temperatura original:");
    scanf("%lf",&t_original);
    
    
    printf("Ingreseel tiempo en minutos:");
    scanf("%lf",&ti_original);
    
    
    printf("Ingrese la tempertura nueva:");
    scanf("%lf",&t_nueva);
    
    // Calcular el nuevo tiempo
    ti_nuevo_calculado =  (t_original/t_nueva)* ti_original;
            
            //Presentar resultados 
    printf("El nuevo tiempo calculado es: %0.lf minutos\n",ti_nuevo_calculado);
    
    
    return (EXIT_SUCCESS);
}

