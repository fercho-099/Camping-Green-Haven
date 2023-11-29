#pragma once



void cargarAlumnos();
void mostrarAlumnos();
bool grabarEnDisco(Alumno);

///DESARROLLO FUNCIONES

void cargarAlumnos() {

	Alumno reg;
	reg.Cargar();
	if (grabarEnDisco(reg) == true) {

		cout << "Registro agregado" << endl;
	}

	else {

		cout << "No se pudo agregar el registro" << endl;
	}

	system("pause");

}


void mostrarAlumnos() {

	Alumno reg;

	FILE *p;
	

	p = fopen("Alumno.dat", "rb");

	if (p == NULL) {


		cout << "No se puede crear o abrir el archivo" << endl;
		return;

	}

	fread(&reg, sizeof reg, 1, p);
	fclose(p);
	reg.Mostrar();

}

bool grabarEnDisco(Alumno reg) {

	FILE *p;
	
	p =  fopen( "alumnos.dat", "wb");

	if (p == NULL) {


		cout << "No se puede crear o abrir el archivo" << endl;
		return false;
		
	}

	fwrite(&reg, sizeof reg, 1, p);

	fclose(p);
	return true;

}
