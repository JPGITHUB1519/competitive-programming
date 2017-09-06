#include <iostream>
#include <string>

using namespace std;

int main() {
	// debo crear un puntero apuntando a null
	// espacio de memoria la cual hara referencia al nuevo que crearemos
	string *titulos = NULL;
	string entrada;
	int tamanio;
	cout << "Cuantos libros desea ingresar?" << endl;
	getline(cin, entrada);
	tamanio = stoi(entrada);

	// creacion de array dinamico
	titulos = new string[tamanio];

	for (int i = 0; i < tamanio; i++) {
		getline(cin, titulos[i]);
	}

	// imprimir arreglo
	for (int i = 0; i < tamanio; i++) {
		cout << titulos[i] << endl;
	}

	// liberando memoria importante! OJOOOOOOOOO
	delete [] titulos;
	titulos = NULL;

	return 0;
}