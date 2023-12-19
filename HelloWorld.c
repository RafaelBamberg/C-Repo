#include <stdio.h>


int main() {
    int age = 123; // Numero inteiro
    char grade = 'A'; // Caractere, aspas simples
    char name[] = "string"; // Array de caracteres (na teoria uma string), aspas duplas
    float gpa = 3.5; // Numero com ponto flutuante
    double gpa2 = 3.5; // Numero com ponto flutuante com mais precisao

    // %d para inteiro, %c para caractere, %s para string, %f para float, %lf para double

    printf("MOSTRANDO %s\n", name);
    printf("MOSTRANDO %d\n", age);
    printf("MOSTRANDO %c\n", grade);
    printf("MOSTRANDO %f\n", gpa);
    printf("MOSTRANDO %lf\n", gpa2);
    return 0;
}