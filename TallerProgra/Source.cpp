#include <string>
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
class CPersona
{
private:
	int edad;
	float tama�o;
	char *nombre;
	int dni;
	float peso;


public:
	CPersona();
	~CPersona();
	void setDNI(int DNI);
	int getDNI();
	void Set_Tama�o(float t);
	void Set_Peso(float peso);
	float get_Tama�o();
	float get_Peso();
	float get_IMC();


};

CPersona::CPersona()
{
	nombre = new char[20];
	dni = 0;
	tama�o = 0.0;
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
void CPersona::Set_Tama�o(float t)
{
	tama�o = t;
}
void CPersona::Set_Peso(float peso)
{
	this->peso = peso;
}
float CPersona::get_Tama�o()
{
	return tama�o;
}
float CPersona::get_Peso()
{
	return peso;
}
float CPersona::get_IMC()
{
	float imc;
	imc = (peso / pow(tama�o, 2));
	return imc;
}


int main()
{
	int peso1;
	int tama�o1;

	CPersona *objPersona= new CPersona();
	objPersona->setDNI(72966166);
	cout << "El DNI es: " << objPersona->getDNI()<<endl;
	cout << "Ingrese el peso: " << endl;
	cin >> peso1;
	cout << "Ingrese la estatura " << endl;
	cin >> tama�o1;//
	objPersona->Set_Tama�o(tama�o1);





	_getch();
	return 0;
}