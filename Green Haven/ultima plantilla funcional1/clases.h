#pragma once

class Fecha {

private:

	int dia;
	int mes;
	int anio;

public:

	void Cargar() {
		cout << "Dia: ";
		cin >> dia;
		cout << endl;
		cout << "Mes: ";
		cin >> mes;
		cout << endl;
		cout << "Anio: ";
		cin >> anio;
		cout << endl;

	}

	void Mostrar() {

		cout << dia << "/" << mes << "/" << anio << endl;
	}
};

class Personas {


protected:

	int DNI;
	char Nombre[30];
	char Apellido[30];
	Fecha fechaNac;

public:

	void Cargar();
	void Mostrar();

	///sets()

	void setDNI(int D) { DNI=D;}
	void setNombre(const char *n) {strcpy_s(Nombre, n);}
	void setApellido(const char *apellido) {strcpy_s(this->Apellido, apellido);}
	
	///gets()

	int getDNI() { return DNI; }
	const char *getNombre() { return Nombre;}
	const char* getApellido() { return this-> Apellido;}

};

class Alumno : public Personas {

private:

	int Legajo;

public:

	void Cargar();
	void Mostrar();

	int getLegajo() { return Legajo; }
	void setLegajo(int L) { Legajo = L; }
	void resetearDNI() { DNI = 0; }


};

void Personas::Cargar() {

	cout << "Nombre: ";
	cin.ignore(0, '\n');
	fflush(stdin);
	cin.getline(Nombre, 30);
	cout << endl;
	cout << "Apellido: ";
	cin.ignore(0, '\n');
	fflush(stdin);
	cin.getline(Apellido, 30);
	cout << endl;
	cout << "DNI: ";
	fflush(stdin);
	cin>>DNI;
	cout << endl;
	fechaNac.Cargar();


}

void Personas::Mostrar() {

	cout << "Nombre: " << Nombre << endl;
	cout << "Apellido: " << Apellido << endl;
	cout << " DNI: " <<this-> DNI << endl;
	fechaNac.Mostrar();


}

void Alumno::Cargar() {
	Personas::Cargar();
	cout << " Legajo: ";
	cin>> Legajo;

}

void Alumno::Mostrar() {
	Personas::Mostrar();
	cout << " Legajo: " << Legajo << endl;

}



