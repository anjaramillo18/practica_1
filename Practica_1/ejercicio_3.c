/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   ejercicio_3.c
 * Author: anahijaramillo
 *
 * Created on 4 de mayo de 2025, 15:52
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
// Declarar variables 
    double monto = 0;
    double tasa_anual = 0.0 ;
    double tasa_mensual = 0;
    int numero_de_cuotas = 0;
    double  cuota_total = 0.0;
   
    // Datos de entrada 
    printf("Ingrese el monto:");
    scanf ("%lf",&monto ) ;
     
    printf("Ingrese tasa_anual:");
     scanf("%lf",&tasa_anual);
   
     printf("Ingrese tasa_mensual:");
    scanf("%lf",&tasa_mensual );
    
    tasa_mensual= tasa_anual/100/12 ; 
   
    printf("Ingrse el numero_de_cuotas:");
    scanf("%d",&numero_de_cuotas);
    
    cuota_total = (monto * tasa_mensual) / (1-pow(1+tasa_mensual,-numero_de_cuotas));
    
    //Presentar resultados 
    printf("Presentar la Cuota_total:%.2lf $",cuota_total );
    
    
             return (EXIT_SUCCESS);
}

