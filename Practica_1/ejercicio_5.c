/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   ejercio_5.c
 * Author: anahijaramillo
 *
 * Created on 4 de mayo de 2025, 13:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main (int argc, char** argv) {
    //Declarar variables 
    int peso = 0;
    double cantidad_de_agua = 0.0;
  
    // solicitar datos 
    printf ("Ingrese el peso de la persona en kilogramos:");
    scanf("%d",&peso);
   
    //Caltular la cantidad_de_agua 
    cantidad_de_agua = (peso * 35) / 1000.0 ;
            
    //Presentar resultados 
      printf ("Presentar la cantidad_de_agua es: %.2lf litros\n",cantidad_de_agua);
    

    return (EXIT_SUCCESS);
}

