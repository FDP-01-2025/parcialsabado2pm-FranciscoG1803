#include <iostream>

using namespace std;

int main(void){

    //Creacion de variables
    int rol;

    //Mostrar mensaje de los diferentes roles que puede seleccionar
    cout<<"Ingrese el numero del rol que desea que desea ser: \n";
    cout<<"1. Admin\n";
    cout<<"2. Gestor de DB\n";
    cout<<"3. Editor\n";
    cout<<"4. Tester del sistema\n";
    cout<<"5. Viewer\n";
    cout<<"Digite el numero: ";
    cin>>rol;

    //Condicinal switch para mostrar un mensaje, dependiendo de el num que digito
    switch (rol)
    {
    //Mensaje en caso de que digite 1
    case 1:
        cout<<"Uste eligio el rol de admin.";
        break;
    
    //Mensaje en caso de que digite 2
    case 2:
        cout<<"Uste eligio el rol de gestor de DB.";
        break;

    //Mensaje en caso de que digite 3
    case 3:
        cout<<"Uste eligio el rol de editor.";
        break;

    //Mensaje en caso de que digite 4
    case 4:
        cout<<"Uste eligio el rol de tester del sistema.";
        break;

    //Mensaje en caso de que digite 5
    case 5:
        cout<<"Uste eligio el rol de vierwer.";
        break;

    //Mensaje en caso de que digite un numero no valido
    default:
        cout<<"Error. No digito el numero de un rol disponible.";
        break;
    }

    return 0;
}