#include <stdio.h>
#include <stdlib.h>

/*
gcc menu.c -o menuFuncional
./menuFuncional
*/

//declarando funcion
void menu();
void suma(double primerN,double segundoN);
void resta(double primerN,double segundoN);
void multiplicacion(double primerN,double segundoN);
void division(double primerN,double segundoN);
void salir();

int main(){

menu();
return 0;

}

void menu(){
    int operacion;
    double primerN, segundoN;
    

        /* code */
       while (operacion != 5)
       {
        /* code */
        printf("\n Elija una de las siguientes opciones \n");
        printf("1. Suma \n");
        printf("2. Resta \n");
        printf("3. Multiplicacion \n");
        printf("4. Division \n");
        printf("5. Salir \n");
        scanf("%i", &operacion);
        printf("\n Ingrese primer numero: \n");
        scanf("%lf", &primerN);
        printf("\n Ingrese segundo numero: \n");
        scanf("%lf", &segundoN);

//condicional donde llamare mis funciones
    switch (operacion)
    {
    case 1:
        suma(primerN,segundoN);
        break;
    case 2:
        resta(primerN, segundoN);
        break;
    case 3:
        multiplicacion(primerN,segundoN);
        break;
    case 4:
        division(primerN, segundoN);
        break;    
    case 5:
        salir();
    break;                                
    default:
        printf("No existe la opcion");
        break;
            }
       }
}

//codigo 

void suma(double primerN, double segundoN){

   double resultado = primerN + segundoN;
   printf("El resultado de la suma es: %lf \n " , resultado);

}

void resta(double primerN,double segundoN){
    double resultado = primerN - segundoN;
     printf("El resultado de la resta es: %lf \n " , resultado);

}

void multiplicacion(double primerN,double segundoN){

    double contador = 0;
    double resultado;

    for (contador; contador < segundoN; contador++)
    {
        /* code */
        resultado = resultado + primerN;
    }
    

    

    printf("El resultado de su calculo: %lf \n " , resultado);

}

void division(double primerN,double segundoN){

    if (segundoN != 0)
    {
        /* code */
        double resultado = primerN / segundoN;
        printf("El resultado de su calculo: %lf \n" , resultado);
    }
    else
    {
        /* code */
        printf("No se puede realizar la operacion \n");
    }

}

void salir(){
    exit;
}

