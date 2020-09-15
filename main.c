#include <stdio.h>

int main()
{
    unsigned int edad;
    char nombre[100];
    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u", edad + 1);
    return 0;
}