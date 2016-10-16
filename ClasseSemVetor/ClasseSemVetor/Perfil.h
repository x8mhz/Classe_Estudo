#ifndef PERFIL_H
#define PERFIL_H
#pragma once

#include <string>

using namespace std;

class Perfil
{
public:
	Perfil();
	~Perfil();

	void set_Nome(string);
	void set_Idade(int);
	void set_Altura(float);

	string get_Nome();
	int get_Idade();
	float get_Altura();

	void to_String();

private:
	string nome;
	int idade;
	float altura;
};

#endif // !1