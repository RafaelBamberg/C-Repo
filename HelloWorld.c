#include <stdio.h>
#include <stdbool.h>


int main() {
    int age = 123; // Numero inteiro, 4 bytes (2,147,483,647 to -2,147,483,648 )
    char grade = 'A'; // Caractere, aspas simples, 1 byte (0 to 255) ou (-128 to 127)
    char name[] = "string"; // Array de caracteres (na teoria uma string), aspas duplas, 1 byte (0 to 255) ou (-128 to 127)
    float gpa = 3.5123123123; // Numero com ponto flutuante, 4 bytes (32 bytes de precisao) 6 - 7 digitos
    double gpa2 = 3.5; // Numero com ponto flutuante com mais precisao, 8 bytes (64 bytes de precisao) 15- 16 digitos
    bool isMale = true; // Booleano, 1 byte (0 to 255) ou (-128 to 127)

    // %d para inteiro, %c para caractere, %s para string, %f para float, %lf para double

    printf("MOSTRANDO %s\n", name);
    printf("MOSTRANDO %d\n", age);
    printf("MOSTRANDO %c\n", grade);
    printf("MOSTRANDO %f\n", gpa);
    printf("MOSTRANDO %lf\n", gpa2);
    return 0;
}