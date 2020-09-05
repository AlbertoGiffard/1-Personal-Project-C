#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Operaciones.h"

//Sumas
int CalculateSumTypeII(int firstNumber, int secondNumber)
{
    int sum;

    sum = firstNumber + secondNumber;
    return sum;
}
float CalculateSumTypeFF(float firstNumber, float secondNumber)
{
    float sum;

    sum = firstNumber + secondNumber;
    return sum;
}
float CalculateSumTypeIF(int firstNumber, float secondNumber)
{
    float sum;

    sum = (float)firstNumber + secondNumber;
    return sum;
}
float CalculateSumTypeFI(float firstNumber, int secondNumber)
{
    float sum;

    sum = firstNumber + secondNumber;
    return sum;
}
//Restas
int CalculateSubtractionTypeII(int firstNumber, int secondNumber)
{
    int subtraction;

    subtraction = firstNumber - secondNumber;
    return subtraction;
}
float CalculateSubtractionTypeFF(float firstNumber, float secondNumber)
{
    float subtraction;

    subtraction = firstNumber - secondNumber;
    return subtraction;
}
float CalculateSubtractionTypeIF(int firstNumber, float secondNumber)
{
    float subtraction;

    subtraction = firstNumber - secondNumber;
    return subtraction;
}
float CalculateSubtractionTypeFI(float firstNumber, int secondNumber)
{
    float subtraction;

    subtraction = firstNumber - secondNumber;
    return subtraction;
}
// divisiones
float CalculateDivisionTypeII(int firstNumber, int secondNumber)
{
    float division;

    division = (float)firstNumber / (float)secondNumber;
    return division;
}
float CalculateDivisionTypeFF(float firstNumber, float secondNumber)
{
    float division;

    division = firstNumber / secondNumber;
    return division;
}
float CalculateDivisionTypeIF(int firstNumber, float secondNumber)
{
    float division;

    division = (float)firstNumber / secondNumber;
    return division;
}
float CalculateDivisionTypeFI(float firstNumber, int secondNumber)
{
    float division;

    division = firstNumber /(float)secondNumber;
    return division;
}
//multiplicaciones
int CalculateMultiplicationTypeII(int firstNumber, int secondNumber)
{
    int multiplication;

    multiplication = firstNumber * secondNumber;
    return multiplication;
}
float CalculateMultiplicationTypeFF(float firstNumber, float secondNumber)
{
    float multiplication;

    multiplication = firstNumber * secondNumber;
    return multiplication;
}
float CalculateMultiplicationTypeIF(int firstNumber, float secondNumber)
{
    float multiplication;

    multiplication = firstNumber * secondNumber;
    return multiplication;
}
float CalculateMultiplicationTypeFI(float firstNumber, int secondNumber)
{
    float multiplication;

    multiplication = firstNumber * secondNumber;
    return multiplication;
}
//Factorial
long int CalculateFactorial(int firstNumber)
{
    long int result;
    int i;

    result = 1;

    for(i = firstNumber;i>=0;i--){
        if(firstNumber == 0)
        {
            firstNumber = 1;
        }
        result *= firstNumber;
        firstNumber--;
    }
    return result;
}
