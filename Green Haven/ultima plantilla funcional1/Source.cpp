#include <iostream>
using namespace std;
#include <cstdlib>
#include "clases.h"
#include "Opcion1.h"
#include "Opcion2.h"
#include "Opcion3.h"





int main()
{
    
    int Opcion;
    bool estado = true;
    while (estado) {
        system("cls");
        cout << "GREEN HAVEN" << endl;
        cout << "-----------------------------------" << endl;
        cout << endl;
        cout << "1- Reservas" << endl;
        cout << "2- Clientes" << endl;
        cout << "3- Informes" << endl;
        cout << "0- Salir" << endl;

        cout << "Ingrese una opcion: ";
        cin >> Opcion;

        switch (Opcion) {

        case 1:

            Reservas();
           

            break;

        case 2:
         
            Clientes();
        
            break;

        case 3:

            Informes();
                       
            break;

        case 0:

            estado = false;
            break;

        }
    }


    return 0;
}