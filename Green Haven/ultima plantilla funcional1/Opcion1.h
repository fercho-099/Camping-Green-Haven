#pragma once
#include <iostream>
#include <cstdlib>
#include "ArchivoReservas.h"
#include "ClaseReserva.h"
void Opcion1();
void AltaReservas();
void BajaReservas();
void VerReservas();
void BuscarReservas();


void Opcion1() {

    ArchivoReservas reservas("reservas.dat");
    ClaseReservas InfoReservas;
	int Opcion;
    while (true) {
        system("cls");
        std::cout << "GREEN HAVEN" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "1- Alta Reserva" << std::endl;
        std::cout << "2- Baja Reserva" << std::endl;
        std::cout << "3- Ver Reservas" <<std:: endl;
        std::cout << "4- Buscar Reservas" << std::endl;
        std::cout << "0- Menu principal" << std::endl;

        std::cout << "Ingrese una opcion: ";
        std::cin >> Opcion;

        switch (Opcion) {

        case 1:

            AltaReservas();

            break;

        case 2:

            BajaReservas();

            break;

        case 3:

            VerReservas();

            break;

        case 4:

            BuscarReservas();

            break;

        case 0:

            return;

            break;

        default:

            std::cout << "Seleccion Incorrecta" << std::endl;
            system("pause");

        }
    }


 }



void AltaReservas() {///pasar los metodos a la clase de archivoreservas

    ArchivoReservas reservas("reservas.dat");
    ClaseReservas InfoReservas;

    InfoReservas = reservas.Cargar();
    reservas.guardaarReservas(InfoReservas);

}

void BajaReservas() {
    system("cls");
    int dni;
    ArchivoReservas reservas("reservas.dat");
    ClaseReservas InfoReservas;
    
    std::cout << "Ingrese el dni: ";
    std::cin >> dni;
    InfoReservas = reservas.BuscarReservas(dni);
    reservas.Modificar(InfoReservas);///dentro de esrta funcion, tiene que estar guardar Reservas o declarar dos objetos clase reservas y que este metodo devuelva el objeto modificado
    return;


}

void VerReservas() {

    ArchivoReservas reservas("reservas.dat");
    ClaseReservas *InfoReservas;
    int cantidadRegistros = reservas.ContarRegistros();
    InfoReservas = new ClaseReservas[cantidadRegistros];
    InfoReservas = reservas.LeerRegistros(cantidadRegistros);///esta linea me dice que info reservas es igual a todos los registros que trae reservas

    if (CantidadRegistros > 0) {
        for (int x = 0; x < cantidadRegistros; x++) {

            InfoReservas = reservas.LeerRegistros(x);
        }
    }

    else {
        std::cout << "No hay Reservas para mostrar" << std::endl;
        system("pause");
        delete[]InfoReservas;
    }
    return;
}