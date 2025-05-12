/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   ejercio_4.c
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
// declarar variables 
    int hora = 0;
    int minutos = 0;
    int diferencia = 0;

    // Solicitar datos
    printf("Ingrese la hora en formato HH:MM: ");
    scanf("%d:%d", &hora, &minutos);


    printf("Ingrese la diferencia horaria (en horas): ");
    scanf("%d", &diferencia);

    // Realizar la conversión de zona horaria con módulo para mantener las 24(0..23) horas
    hora = (hora + diferencia + 24) % 24;

    // Presentar resultado
    printf("La nueva hora es: %02d:%02d\n", hora, minutos);
    
    return (EXIT_SUCCESS);
}

