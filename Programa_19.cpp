#include <stdio.h>

int main() // FUNCION PRINCIPAL
{
    
float a,b,c,M; // DECLARACION DE VARIABLES   

printf("Bienvenido, calcularemos la media aritmética de tres numeros.\n\n"); // BIENVENIDA DEL PROGRAMA         
printf("Por favor, introduzca el primero: ");         
scanf("%f",&a); //CAPTURAR EL NUMERO 1      

printf("Ahora, inserte el segundo de ellos: ");         
scanf("%f",&b);    // CAPTURAR EL NUMERO 2     

printf("Por ultimo, teclee el numero final: ");         
scanf("%f",&c);   // CAPTURAR EL NUMERO 3

M=(a+b+c)/3;       // OPERACION  

printf("\nEl resultado es %f\n\n",M); // IMPRESION DEL RESULTADO
    
}

