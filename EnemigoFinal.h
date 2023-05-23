#pragma once
#include "Personaje.h"
#include <iostream>

//INDICA QUE HEREDA DE LA CLASE PERSONAJE Y QUE HAY VISIBILIDAD A LA HORA DE
//INSTANCIAR LOS OBJETOS GRACIAS A PUBLIC

class EnemigoFinal :public Personaje
{
private:
	int superAtaqueRayo;
	int superAataqueDisco;

public:
	//CONSTRUCTOR CON ELEMENTOS DE LA CLASE PADRE Y PROPIA

	EnemigoFinal(int Pvida, int Patak, std::string Pname, int PposX, int PposY, int PsuperAtaqueRayo, int PsuperAataqueDisco);

	//GETTERS 
	int getSuperAtaqueRayo();
	int getSuperAataqueDisco();

	//SETTERS
	void setSuperAtaqueRayo(int PsuperAtaqueRayo);
	void setSuperAataqueDisco(int PsuperAataqueDisco);

	//Metodos propios

	void entradaEnemigo();
	void ataqueEnemigoFinal();
	void ataqueNormal();
	void statsFreezer();
};
