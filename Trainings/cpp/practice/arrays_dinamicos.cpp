#include <iostream>
#include <string>

using namespace std;

int main() {
	// debo crear un puntero apuntando a null
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
	return 0;
}