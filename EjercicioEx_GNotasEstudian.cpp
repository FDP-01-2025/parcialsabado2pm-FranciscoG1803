#include <iostream>
#include <string>

using namespace std;

int main(){

    int i, notas[100], verificacion = 0, suma = 0;
    float promedio = 0.0;
    char opciones;
    string nombreE, codigo;

    cout<<"Bienvenido al sistede de notas\nIngrese su nombre: ";
    getline(cin,nombreE);

    cout<<"Ingrese su carnte: ";
    do
    {
        if (verificacion != 0)
        {
            cout<<"\nEl codigo debe contener 6 caracteres y deben ser numeros enteros.";
        }

        cin>>codigo;

        verificacion++;

    } while (codigo.length() != 6);
    
    do
    {
        cout<<"Que desea hacer: \na. Agregar nota\nb.Consultar todas las notas\nc.Calcular promedio\nd.Salir\nQue desea hacer:";
        cin>>opciones;

        switch (opciones)
        {
        case 'a':
            cout<<"Ingrese sus notas\n";
            for (i = 0; i < 9; i++)
            {
                do
                {
                    do
                    {
                        cout<<"Nota "<<(i+1)<<(":");
                        cin>>notas[i];
                    } while (notas[i]>10);
                } while (notas[i]<0);
                suma += notas[i];
            }
            break;
        
        case 'b':
            for (i = 0; i < 9; i++)
            {   
                cout<<"Nota "<<(i+1)<<(": ")<< notas[i]<<"\n";
            }
            break;

        case 'c':
                promedio = suma/9;
                cout<<"Su promedio es: "<<promedio<<"\n";
            break;

        case 'd':
                cout<<"Cerrando sistema de notas, adios "<<nombreE;
            break;

        default:
                cout<<"Opcion elegida no valida";
            break;
        }

    } while (opciones != 'd');
    
}