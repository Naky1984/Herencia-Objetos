#pragma once
#include <iostream>
class Personaje
{
	//Atributos privados o variables  privadas.
private:
	int vida;
	int atak;
	std::string name;
	int posicionX;
	int posicionY;

public:

	//CONSTRUCTOR

	Personaje(int Pvida, int Patak, std::string Pname, int PposX, int PposY);

	//GETTERS
	int getVida();
	int getAtak();
	std::string getName();
	int getPosX();
	int getPosY();

	//SETTERS
	void setVida(int Pvida);
	void setAtak(int Patak);
	void setName(std::string Pname);
	void setPosX(int PposX);
	void setPosY(int PposY);

	//METODOS PROPIOS
	void luchaEnemigoFinal();
	void otraRonda();
	void statsGoku();
	void bolaGenkiDama();
};



