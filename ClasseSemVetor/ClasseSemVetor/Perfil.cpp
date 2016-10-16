#include <iostream>
#include <string>
#include "Perfil.h"

using namespace std;

Perfil::Perfil()
{
	nome = "";
	idade = 0;
	altura = 0.0;
}

Perfil::~Perfil()
{
}

void Perfil::set_Nome(string n)
{
	nome = n;
}

void Perfil::set_Idade(int i)
{
	idade = i;
}

void Perfil::set_Altura(float a)
{
	altura = a;
}

string Perfil::get_Nome()
{
	return nome;
}

int Perfil::get_Idade()
{
	return idade;
}

float Perfil::get_Altura()
{
	return altura;
}

void Perfil::to_String()
{
	cout << "NOME: " << get_Nome() << endl;
	cout << "IDADE: " << get_Idade() << endl;
	cout << "ALTURA: " << get_Altura() << endl;
}