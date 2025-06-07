#include <iostream>

using namespace std;

int main(void){

    //Creacion de variables
    int numeros[10], suma = 0, i, contMayor = 0, contMenor = 0;
    float promedio;

    //Solicitar datos para el array
    cout<<"Ingrese 10 numeros entreros, para saber cuales son mayores al promedio: \n";
    for (i = 0; i < 10; i++)
    {
        cout<<"Numero "<< (i + 1)<<":";
        cin>>numeros[i];
        suma = numeros[i] + suma;
    }

    //Calcular el promedio de la suma total de todos num del array
    promedio = suma/10;

    //Verificacion de los numeros que son mayores al promedio y tambien de cuales son menores o iguales
    for ( i = 0; i < 10; i++)
    {
        //Si son mayores al promedio se le suma 1 al conteo total
        if (numeros[i] > promedio)
        {
            contMayor = contMayor + 1;
        }

        //Si son menores o iguales al promedio se le suma 1 al conteo total
        else
        {
            contMenor = contMenor + 1;
        }
    }
    
    //Mostrar mensaje del conteo total de cuantos son mayores o menores/iguales
    cout<<"El promedio total es "<< promedio <<" y la cantidad de numero mayores y menos es:\n"<<"Numeros mayores al promedio: "<<contMayor<<"\nNumeros menores o iguales al promedio: "<<contMenor;
    

    return 0;
}