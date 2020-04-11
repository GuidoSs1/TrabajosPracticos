#include <stdio.h>
#include <stdlib.h>
#include "input.h"

float fSuma(float numero1, float numero2)
{
    float suma;

    suma = numero1 + numero2;                           // Funcion para la suma de los operandos

    return suma;
}

float fResta(float numero1, float numero2)
{
    float resta;

    resta = numero1 - numero2;                          // Funcion para la resta de los operandos

    return resta;
}

float fMultiplicacion(float numero1, float numero2)
{
    float multiplicacion;

    multiplicacion = numero1 * numero2;                 // Funcion para el producto entre ambos operandos

    return multiplicacion;
}

float fDivision(float numero1, float numero2)
{
    float division;

    division = numero1 / numero2;                       // Funcion para el resto entre la division de ambos operandos

    return division;
}

double factorialUno(float numero1)
{
    double factorialA;

    if(numero1 == 0) {
        factorialA = 1;                         // Verificacion del valor del numero
    } else {
        factorialA = 1;
        while(numero1 > 1) {
            factorialA *= numero1;              // Realizo el factorial del primer operando
            numero1--;
        }
    }

    return factorialA;
}

double factorialDos(float numero2)
{
    double factorialB;

    if(numero2 == 0) {
        factorialB = 1;                         // Verificacion del valor del numero
    } else {
        factorialB = 1;
        while(numero2 > 1) {
            factorialB *= numero2;              // Realizo el factorial del segundo operando
            numero2--;
        }
    }

    return factorialB;
}

