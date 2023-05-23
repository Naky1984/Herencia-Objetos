#include "Personaje.h"
#include <iostream>
using namespace std;
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <mmsystem.h>


//CONSTRUCTOR
Personaje::Personaje(int Pvida, int Patak, string Pname, int PposX, int PposY) {
	vida = Pvida;
	atak = Patak;
	name = Pname;
	posicionX = PposX;
	posicionY = PposY;
}

//GETTERS

int Personaje::getVida() {return vida;}
int Personaje::getAtak() {return atak;}
string Personaje::getName() {return name;}
int Personaje::getPosX() {return posicionX;}
int Personaje::getPosY() {return posicionY;}

//SETTERS

void Personaje::setVida(int Pvida) { vida = Pvida; }
void Personaje::setAtak(int Patak) { atak = Patak; }
void Personaje::setName(string Pname) { name = Pname; }
void Personaje::setPosX(int PposX) { posicionX = PposX; }
void Personaje::setPosY(int PposY) { posicionY = PposY; }

// METODOS PROPIOS

void Personaje::luchaEnemigoFinal() {
	Sleep(900);
	cout << "Goku no se lo piensa y empieza a atacar" <<endl;
	Sleep(900);
	setAtak(200 + rand() % (300 - 200));
	Sleep(900);
	cout << "El ataque ha sido de " << getAtak() << endl;
	Sleep(900);
}
void Personaje::statsGoku() {
	Sleep(900);
	cout << "A nuestro heroe le quedan estos puntos de vida " <<getVida()<<endl;
	Sleep(900);
}
void::Personaje::otraRonda() {
	Sleep(900);
	cout << "Goku estaba disfrutando esta pelea! siempre le han gustado los enemigos fuertes!"<<endl;
	Sleep(900);
	setAtak(150 + rand() % (160 - 150));
	Sleep(900);
	cout << "El ataque ha sido de " << getAtak() << endl;
	Sleep(900);
}

void Personaje::bolaGenkiDama() {
	Sleep(900);
	cout << "Ese ha sido un buen golpe maldito!" <<endl;
	Sleep(900);
	cout << "Goku, Empezo a recolectar la energia del planeta namekiano para crear una gran bola genki"<<endl;
	Sleep(900);
	cout << "Cuando la esfera de energia ya era lo suficiente grande y poderosa, se la lanzo a Freezer" <<endl;
	Sleep(900);
	setAtak(1000 + rand() % (1100 - 1000));
	Sleep(900);
	cout << "El ataque ha sido de " << getAtak() << endl;
	Sleep(900);
}
