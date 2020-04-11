#include <stdio.h>
#include <stdlib.h>
#include "input.h"

int main()
{
    int opcion;
    float numero1 = 0;
    float numero2 = 0;

    int verificador = 0;
    int verificador2 = 0;

    float suma;
    float resta;
    float multiplicacion;                  // Planteo las varibles para las operaciones y el menu
    float division;
    double factorialA;
    double factorialB;

    do
    {

        printf("1. Ingresar 1er operando A = %f", numero1);
        printf("\n2. Ingresar 2do operando B = %f", numero2);
        printf("\n3. Calcular todas las operaciones");              // Menu de opciones
        printf("\n4. Informar resultado de las operaciones");
        printf("\n5. Salir");

        printf("\nElija una opcion: ");
        scanf("%d", &opcion);



        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer operando: ");             // pide el primer operando
                scanf("%f", &numero1);
                verificador = 1;                                    // Verifica que se haya ingresado un numero
            break;
            case 2:
                printf("Ingrese el segundo operando: ");            // pide el segundo operando
                scanf("%f", &numero2);
                verificador2 = 1;                                   // Verifica que se haya ingresado un numero
            break;
            case 3:
                if(verificador == 1 && verificador2 == 1){          // Verifica que se hayan ingresado ambos operandos para comenzar a realizar las operaciones
                    suma = fSuma(numero1, numero2);
                    resta = fResta(numero1, numero2);
                    multiplicacion = fMultiplicacion(numero1, numero2);
                    division = fDivision(numero1, numero2);         // Llamada a las funciones que contienen las operaciones matematicas
                    factorialA = factorialUno(numero1);
                    factorialB = factorialDos(numero2);
                } else {
                    printf("No se ha ingresado un operando. Vuelva a intentarlo.");     // Error
                }

            break;
            case 4:
                printf("El resultado de A+B es: %f\n", suma);
                printf("El resultado de A-B es: %f\n", resta);
                if(numero1 == 0 || numero2 == 0) {
                        printf("No es posible dividir por 0.\n");                       // verificacion para realizar la division
                } else {
                    printf("El resultado de A/B es: %f\n", division);
                }
                printf("El resultado de A*B es: %f\n", multiplicacion);
                if (numero1 < 0 || numero2 < 0) {
                    printf("No es posible el factorial de un numero negativo.\n");      // verificacion para realizar el factorial del numero
                } else {
                    printf("El factorial de A es: %lf", factorialA);
                    printf(" y El factorial de B es: %lf\n", factorialB);
                }

            break;
            case 5:
                printf("\nHasta luego...\n");                                            // opcion para salir de la aplicacion
            break;
            default:
                printf("\nError. Esa no es una opcion.\n");                             // validacion de la opcion elegida
            break;
        }

        system("\npause\n");                                                            // Limpiar la consola entre cada opcion elejida
        system("cls");

    } while(opcion != 5);

    return 0;

}
