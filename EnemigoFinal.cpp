#include "EnemigoFinal.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <mmsystem.h>
using namespace std;
#include <cstdlib>
EnemigoFinal::EnemigoFinal(int Pvida,
	int Patak,
	std::string Pname,
	int PposX,
	int PposY,
	int PsuperAtaqueRayo,
	int PsuperAataqueDisco) :Personaje
	(Pvida,
		Patak,
		Pname,
		PposX,
		PposY)
{
	superAtaqueRayo = PsuperAtaqueRayo;
	superAataqueDisco = PsuperAataqueDisco;
}

//GETTERS

int EnemigoFinal::getSuperAtaqueRayo() {
	return superAtaqueRayo;
}

int EnemigoFinal::getSuperAataqueDisco() {
	return superAataqueDisco;
}

//SETTERS

void EnemigoFinal::setSuperAtaqueRayo(int PsuperAtaqueRayo) {
	superAtaqueRayo = PsuperAtaqueRayo;
}

void EnemigoFinal::setSuperAataqueDisco(int PsuperAataqueDisco) {
	superAataqueDisco = PsuperAataqueDisco;
}

//Metodos propios

void EnemigoFinal::entradaEnemigo() {
	Sleep(900);
	cout << "Has encontrado la salida, pero de entre las sombras aparece " << getName() << endl;
	Sleep(900);
	cout << "Este enemigo es poderoso, se sabe con solo verlo. Veggeta me comento una vez" << endl;
	Sleep(900);
	cout << "Que el fue el causante de la extincion de nuestra especie" << endl;
	Sleep(900);
	cout << getName() << " tiene estos puntos de vida " << getVida() << endl;
	Sleep(900);
}

void EnemigoFinal::ataqueEnemigoFinal() {
    int superAtaque = rand() % 6 + 1;

    if (getVida() <= 650 && getVida()>480) {
        Sleep(900);
        cout << "Maldito mono! Me has hecho enfadar! Como osas enfrentarte a mi!" << endl;
        Sleep(900);

        if (superAtaque < 4) {
            setSuperAtaqueRayo(500 + rand() % (650 - 500));
            Sleep(900);
            cout << "El ataque de rayo ha sido de " << getSuperAtaqueRayo() << endl;
            Sleep(900);
        }
        else {
            cout << "Bastardo! Insecto inmundo! Te voy a hacer papilla!" << endl;
            setSuperAataqueDisco(500 + rand() % (650 - 500));
            Sleep(900);
            cout << "El ataque de disco ha sido de " << getSuperAataqueDisco() << endl;
            Sleep(900);
        }
    }

    if (getVida() <= 380 && getVida() > 100) {
        Sleep(900);
        cout << "MALDITOOO! NO SALDRAS VIVO DE ESTA!" << endl;
        Sleep(900);
        superAtaque = rand() % 6 + 1; // Genera un nuevo número aleatorio

        if (superAtaque < 4) {
            setSuperAtaqueRayo(500 + rand() % (650 - 500));
            Sleep(900);
            cout << "El ataque de rayo ha sido de " << getSuperAtaqueRayo() << endl;
            Sleep(900);
        }
        else {
            setSuperAataqueDisco(500 + rand() % (650 - 500));
            Sleep(900);
            cout << "El ataque de disco ha sido de " << getSuperAataqueDisco() << endl;
            Sleep(900);
        }
    }
}

void EnemigoFinal::ataqueNormal() {
	Sleep(900);
	cout << "Ahora me toca atacar a mi pequenyo Diablo. No te vas a librar!"<<endl;
	setAtak(200 + rand() % (300 - 200));
	Sleep(900);
	cout << "El ataque ha sido de " << getAtak() <<endl;
}
void EnemigoFinal::statsFreezer() {
	Sleep(900);
	cout <<"a Frezzer le quedan estos puntos de vida " << getVida()<< endl;
	Sleep(900);
}
