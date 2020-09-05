#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <wchar.h>
#include <locale.h>
#include "Operaciones.h"

int OptionMenu();

int main()
{
    //La siguiente linea me permite colocar tildes en los textos
    setlocale(LC_ALL, "");
    OptionMenu();
    return 0;
}
int OptionMenu()
{
    char option;
    char optionForA;
    char optionForB;
    float firstNumberFloat;
    float resultDivisionFloat;
    float resultSubFloat;
    float resultSumFloat;
    float resultMultiplicationFloat;
    float secondNumberFloat;
    int countOfLaps;
    int firstNumberInt;
    int showResults;
    int resultSumInt;
    int resultSubInt;
    int resultMultiplicationInt;
    int secondNumberInt;
    int validFirstNumber;
    int validSecondNumber;
    long int firstNumberFactorial;
    long int secondNumberFactorial;

    //el siguiente mensaje es unicamente para mostrar mensaje de bienvenida o no
    countOfLaps = 0;
    showResults = 0;
    validFirstNumber = 0;
    validSecondNumber = 0;
    do
    {
        if(countOfLaps == 0)
        {
            printf("Bienvenido al trabajo práctico 1 de Alberto Giffard, ¿qué quieres hacer?\n1. Ingresar 1er operando\n2. Ingresar 2do operando\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n");
        }
        else
        {
            /**
                *Las siguientes lineas es para mostrarle al usuario los diferentes estados en los que se encuentra el flujo del programa
            */
            if(validFirstNumber == 0 && validSecondNumber == 0)
            {
                printf("1. Ingresar 1er operando\n2. Ingresar 2do operando\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n");
            }
            else if(validFirstNumber != 0 && validSecondNumber == 0)
            {
                if(optionForA == 'b')
                {
                    printf("1. Modificar 1er operando\n   1er operando actual: %.2f\n2. Ingresar 2do operando\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n", firstNumberFloat);
                }
                else
                {
                    printf("1. Modificar 1er operando\n   1er operando actual: %d\n2. Ingresar 2do operando\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n", firstNumberInt);
                }
            }
            else if(validFirstNumber == 0 && validSecondNumber != 0)
            {
                if(optionForB == 'b')
                {
                    printf("1. Ingresar 1er operando\n2. Modificar 2do operando\n   2do operando actual: %.2f\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n", secondNumberFloat);
                }
                else
                {
                    printf("1. Ingresar 1er operando\n2. Modificar 2do operando\n   2do operando actual: %d\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n", secondNumberInt);
                }
            }
            else
            {
                if(optionForA == 'b' && optionForB == 'b')
                {
                    printf("1. Modificar 1er operando\n   1er operando actual: %.2f\n2. Modificar 2do operando\n   2do operando actual: %.2f\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n", firstNumberFloat, secondNumberFloat);
                }
                else if(optionForA == 'b' && optionForB == 'a')
                {
                    printf("1. Modificar 1er operando\n   1er operando actual: %.2f\n2. Modificar 2do operando\n   2do operando actual: %d\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n", firstNumberFloat, secondNumberInt);
                }
                else if(optionForA == 'a' && optionForB == 'a')
                {
                    printf("1. Modificar 1er operando\n   1er operando actual: %d\n2. Modificar 2do operando\n   2do operando actual: %d\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n", firstNumberInt, secondNumberInt);
                }
                else
                {
                    printf("1. Modificar 1er operando\n   1er operando actual: %d\n2. Modificar 2do operando\n   2do operando actual: %.2f\n3. Calcular todas las operaciones entre los operando\n4. Informar resultados\n5. Salir\n", firstNumberInt, secondNumberFloat);
                }
            }
        }
        printf("Elija una opción: ");
        fflush(stdin);
        scanf("%c", &option);
        while(!(option == '1' || option == '2' || option == '3' || option == '4' || option == '5'))
        {
            printf("Elija una opción válida: ");
            fflush(stdin);
            scanf("%c", &option);
        }
        switch(option)
        {
        case '1':
            printf("Ingrese 'A' para número entero o 'B' para número decimal: ");
            fflush(stdin);
            scanf("%c", &optionForA);
            optionForA = tolower( optionForA);
            while(!(optionForA == 'a' || optionForA == 'b'))
            {
                printf("Elija una opción válida, 'A' para número entero o 'B' para número decimal: ");
                fflush(stdin);
                scanf("%c", &optionForA);
                optionForA = tolower(optionForA);
            }
            if(optionForA == 'a')
            {
                printf("Ingrese su primer operando, recuerda que si es negativo no podremos calcular el factorial: ");
                scanf("%d", &firstNumberInt);
            }
            else
            {
                printf("Ingrese su primer operando, recuerda que al ser decimal no podremos calcular el factorial: ");
                scanf("%f", &firstNumberFloat);
            }
            // con esta linea ya el programa entiende que se decidio un primer numero
            validFirstNumber = 1;
            break;
        case '2':
            printf("Ingrese 'A' para número entero o 'B' para número decimal: ");
            fflush(stdin);
            scanf("%c", &optionForB);
            optionForB = tolower( optionForB);
            while(!(optionForB == 'a' || optionForB == 'b'))
            {
                printf("Elija una opción válida, 'A' para número entero o 'B' para número decimal: ");
                fflush(stdin);
                scanf("%c", &optionForB);
                optionForB = tolower(optionForB);
            }
            if(optionForB == 'a')
            {
                printf("Ingrese su segundo operando, recuerda que si es negativo no podremos calcular el factorial: ");
                scanf("%d", &secondNumberInt);
            }
            else
            {
                printf("Ingrese su segundo operando, recuerda que al ser decimal no podremos calcular el factorial: ");
                scanf("%f", &secondNumberFloat);
            }
            // con esta linea ya el programa entiende que se decidio un segundo numero
            validSecondNumber = 1;
            break;
        case '3':
            if(validFirstNumber == 0 && validSecondNumber == 0)
            {
                printf("Lo siento, aún nos debes indicar cuales seran tus operando, revisa las primeras opciones\n");
            }
            else if(validFirstNumber != 0 && validSecondNumber == 0)
            {
                printf("Lo siento, aún nos debes indicar cual será tu segundo operando, revisa la opción 2\n");
            }
            else if(validFirstNumber == 0 && validSecondNumber != 0)
            {
              printf("Lo siento, aún nos debes indicar cual será tu primer operando, revisa la opción 1\n");
            }
            else
            {
                if(optionForA == 'a' && optionForB == 'a')
                {
                    resultSumInt = CalculateSumTypeII(firstNumberInt, secondNumberInt);
                    resultSubInt = CalculateSubtractionTypeII(firstNumberInt, secondNumberInt);
                    if(secondNumberInt != 0)
                    {
                        resultDivisionFloat = CalculateDivisionTypeII(firstNumberInt, secondNumberInt);
                    }
                    resultMultiplicationInt = CalculateMultiplicationTypeII(firstNumberInt, secondNumberInt);
                    firstNumberFactorial = CalculateFactorial(firstNumberInt);
                    secondNumberFactorial = CalculateFactorial(secondNumberInt);
                }
                else if(optionForA == 'a' && optionForB == 'b')
                {
                    resultSumFloat = CalculateSumTypeIF(firstNumberInt, secondNumberFloat);
                    resultSubFloat = CalculateSubtractionTypeIF(firstNumberInt, secondNumberFloat);
                    secondNumberInt = secondNumberFloat;
                    if(secondNumberInt != 0)
                    {
                        resultDivisionFloat = CalculateDivisionTypeIF(firstNumberInt, secondNumberFloat);
                    }
                    resultMultiplicationFloat = CalculateMultiplicationTypeIF(firstNumberInt, secondNumberFloat);
                    firstNumberFactorial = CalculateFactorial(firstNumberInt);
                }
                else if(optionForA == 'b' && optionForB == 'b')
                {
                    resultSumFloat = CalculateSumTypeFF(firstNumberFloat, secondNumberFloat);
                    resultSubFloat = CalculateSubtractionTypeFF(firstNumberFloat, secondNumberFloat);
                    secondNumberInt = secondNumberFloat;
                    if(secondNumberInt != 0)
                    {
                        resultDivisionFloat = CalculateDivisionTypeFF(firstNumberFloat, secondNumberFloat);
                    }
                    resultMultiplicationFloat = CalculateMultiplicationTypeFF(firstNumberFloat, secondNumberFloat);
                }
                else
                {
                    resultSumFloat = CalculateSumTypeFI(firstNumberFloat, secondNumberInt);
                    resultSubFloat = CalculateSubtractionTypeFI(firstNumberFloat, secondNumberInt);
                    if(secondNumberInt != 0)
                    {
                        resultDivisionFloat = CalculateDivisionTypeFI(firstNumberFloat, secondNumberInt);
                    }
                    resultMultiplicationFloat = CalculateMultiplicationTypeFI(firstNumberFloat, secondNumberInt);
                    secondNumberFactorial = CalculateFactorial(secondNumberInt);
                }
                printf("Calculados los resultados, los encuentras en la opción 4\n");
                showResults = 1;
            }
            break;
        case '4':
            if(showResults == 0)
            {
                printf("Primero debemos calcularlos, revisa la opción 3\n");
            }
            else
            {
                if(optionForA == 'a' && optionForB == 'a')
                {
                    printf("Resultado de la suma: %d\n", resultSumInt);
                    printf("Resultado de la resta: %d\n", resultSubInt);
                    if(secondNumberInt != 0)
                    {
                        printf("Resultado de la división: %.2f\n", resultDivisionFloat);
                    }
                    else
                    {
                        printf("No es posible dividir por 0\n");
                    }
                    printf("Resultado de la multiplicación: %d\n", resultMultiplicationInt);
                }
                else
                {
                    printf("Resultado de la suma: %.2f\n", resultSumFloat);
                    printf("Resultado de la resta: %.2f\n", resultSubFloat);
                    if(secondNumberInt != 0)
                    {
                        printf("Resultado de la división: %.2f\n", resultDivisionFloat);
                    }
                    else
                    {
                        printf("No es posible dividir por 0\n");
                    }
                    printf("Resultado de la multiplicación: %.2f\n", resultMultiplicationFloat);
                }
                if(optionForA == 'a' && firstNumberInt >= 0)
                {
                    if(optionForB == 'a' && secondNumberInt >= 0)
                    {
                        printf("El factorial de A es: %ld y el factorial de B es: %ld\n", firstNumberFactorial, secondNumberFactorial);
                    }
                    else
                    {
                        printf("El factorial de A es: %ld y el factorial de B no se puede determinar\n", firstNumberFactorial);
                    }
                }
                else if(optionForB == 'a' && secondNumberInt >= 0)
                {
                    printf("El factorial de A no se puede determinar y el factorial de B es: %ld\n", secondNumberFactorial);
                }
                else
                {
                    printf("El factorial de A no se puede determinar y el factorial de B tampoco\n");
                }
            }
            break;
        case '5':
            printf("Espero que te haya gustado, nos vemos en la próxima.\n");
            break;
        }
        countOfLaps = 1;
    } while(option != '5');
    return 0;
}
