/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   ejercio_6.c
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
    double meta_ahorro = 0 ;
    double ahorro_mensual = 0;
    int meses = 0;
    
   // Solicitar datos 
    printf ("Ingrese la meta_ahorro en dolares: ");
    scanf("%lf",&meta_ahorro);
     
    printf("Ingrese el ahorro_mensual en dolares:");
    scanf("%lf",&ahorro_mensual);
    
    meses = meta_ahorro/ahorro_mensual ;
    
    //Presentar resultados 
    printf(" Se necesitan %d meses  para alcanzar la meta de ahorro.\n", meses);
    
    
          
    

    return (EXIT_SUCCESS);
}

