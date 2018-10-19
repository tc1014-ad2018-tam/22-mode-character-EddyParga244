/*
 * Este programa fue realizado como la tarea#22 el 17 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es identificar el caracter que mas se repite (la moda)
 * y el numero de repeticiones de ese caracter en un string.
 *
 * Fecha: 17 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

int main(void) {
    //Declaracion de varibles
    char cadena[100];
    char c;
    char cmax;
    int cont;
    int mode = 0;

    //Se le pide al usuario escribir un texto
    printf("Escribe un texto: ");
    fgets(cadena, sizeof(cadena),stdin); //Se lee el texto

    //Mientras que el valor i, que correcponde a cada caracter del string que no sea el caracter nulo (\0)...
    for(int i = 0;cadena[i]!='\0'; ++i){
        if (cadena[i]!= ' '){ //Si el caracter es un espacio en blanco, no lo analiza
            c=cadena[i]; //La variable c se considera como el caracter a obtener su moda
            cont=1;
            //Ciclo para contar las repeticiones del caracter c
            for(int j = i+1;cadena[j]!='\0'; ++j){
                if(c == cadena[j]){
                    ++cont;
                }
            }
            //actualizar el dato del caracter que tiene mas repeticiones
            if(cont > mode){
                mode = cont;
                cmax = cadena[i];
            }
        }
    }

    printf("El caracter mas repetido es: %c \n", cmax);
    printf("Su moda es: %d \n", mode);
    return 0;
}