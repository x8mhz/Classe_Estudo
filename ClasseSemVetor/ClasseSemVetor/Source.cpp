#include <iostream>
#include <string>
#include <stdlib.h>
#include "Perfil.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	string nome;
	int idade;
	float altura;

	Perfil usuario;

	cout << "NOME: ";
	getline(cin, nome);
	cout << "IDADE: ";
	cin >> idade;
	cin.ignore();
	cout << "ALTURA: ";
	cin >> altura;
	cin.ignore();

	usuario.set_Nome(nome);
	usuario.set_Idade(idade);
	usuario.set_Altura(altura);

	system("CLS");

	usuario.to_String();

	system("PAUSE");
	return 0;
}