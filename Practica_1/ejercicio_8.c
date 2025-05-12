/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   ejercio_8.c
 * Author: anahijaramillo
 *
 * Created on 4 de mayo de 2025, 13:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    // Declarar variables 
    double ingreso = 0;
    double  gasto = 0;
    double  monto_del_resultado = 0;
    
    // Solicitar datos 
    printf("Ingrese el ingreso en:$");
   
    //Asignando el ingreso a la variable 
    scanf("%lf",&ingreso);
    
    printf("Ingrese el gasto en:$");
   
    //Asinando el gasto a la variable 
    scanf("%lf",&gasto);
    
    //calcular el nuevo monto del resultado
    monto_del_resultado = ingreso - gasto ;
    
    
    //Presentar los resultados 
    
   printf("EL monto del resultado es: %.lf",monto_del_resultado);
    

    return (EXIT_SUCCESS);
}

