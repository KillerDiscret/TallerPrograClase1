#include <string>
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
class CPersona
{
private:
	int edad;
	float tamaño;
	char *nombre;
	int dni;
	float peso;


public:
	CPersona();
	~CPersona();
	void setDNI(int DNI);
	int getDNI();
	void Set_Tamaño(float t);
	void Set_Peso(float peso);
	float get_Tamaño();
	float get_Peso();
	float get_IMC();


};

CPersona::CPersona()
{
	nombre = new char[20];
	dni = 0;
	tamaño = 0.0;
	edad = 0;
	peso = 0.0;
}

CPersona::~CPersona()
{
	delete nombre;
}
void CPersona::setDNI(int DNI)
{
	this->dni = DNI;

}
int CPersona::getDNI()
{
	return dni;
}
void CPersona::Set_Tamaño(float t)
{
	tamaño = t;
}
void CPersona::Set_Peso(float peso)
{
	this->peso = peso;
}
float CPersona::get_Tamaño()
{
	return tamaño;
}
float CPersona::get_Peso()
{
	return peso;
}
float CPersona::get_IMC()
{
	float imc;
	imc = (peso / pow(tamaño, 2));
	return imc;
}


int main()
{
	int peso1;
	int tamaño1;

	CPersona *objPersona= new CPersona();
	objPersona->setDNI(72966166);
	cout << "El DNI es: " << objPersona->getDNI()<<endl;
	cout << "Ingrese el peso: " << endl;
	cin >> peso1;
	cout << "Ingrese la estatura " << endl;
	cin >> tamaño1;//
	objPersona->Set_Tamaño(tamaño1);





	_getch();
	return 0;
}