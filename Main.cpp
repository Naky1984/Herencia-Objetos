#include <iostream>
using namespace std;
#include "Personaje.h"
#include "EnemigoFinal.h"
#include <cstdlib> // Incluir la biblioteca para srand y rand
#include <ctime> // Incluir la biblioteca para obtener la hora actual
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <mmsystem.h>

void welcome() {
    cout << "                     ---------------------------------------------------------------------------------------------" << endl;
    cout << "                     |        ______                                                            \\\\    //          |" << endl;
    cout << "                     |       ||     \\\\' ::::::::  -------    :::::::::: ..........  ?????????    \\\\  //           |" << endl;
    cout << "                     |       ||     ||  ::        ||             ||     ..      ..  ??     ??     \\\\//            |" << endl;
    cout << "                     |       ||     ||  ::::::::  ||______       ||     ..........  ??     ??      ||             |" << endl;
    cout << "                     |       ||     //  ::                ||     ||     ..     ..   ??     ??      ||             |" << endl;
    cout << "                     |       ||____//   ::::::::   ______ ||     ||     ..      ..  ?????????      ||             |" << endl;
    cout << "                     ---------------------------------------------------------------------------------------------" << endl;
}

const int FILAS = 10;
const int COLUMNAS = 5;



void mostrarTabla(char tabla[FILAS][COLUMNAS], int posXHeroe, int posYHeroe, int posXEnemigo1, int posYEnemigo1, int posXEnemigo2, int posYEnemigo2, int posXEnemigo3, int posYEnemigo3, int posXEnemigo4, int posYEnemigo4, int posXEneFinal, int PosYEneFinal) {
    cout << "\n";
    cout << "  +-----+------+------+------+------+" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (i == posYHeroe && j == posXHeroe) {
                cout << " |  H  ";

            }
            else if (i == posYEnemigo1 && j == posXEnemigo1)
            {
                cout << " |     ";
            }
            else if (i == posYEnemigo2 && j == posXEnemigo2)
            {
                cout << " |     ";
            }
            else if (i == posYEnemigo3 && j == posXEnemigo3)
            {
                cout << " |     ";
            }
            else if (i == posYEnemigo4 && j == posXEnemigo4)
            {
                cout << " |     ";
            }
            else if (i == PosYEneFinal && j == posXEneFinal)
            {
                cout << " |     ";
            }
            else {
                cout << " |     ";
            }
        }
        cout << " |" << endl;
        cout << "  +-----+------+------+------+------+" << endl;
    }
}

int main() {
    srand(time(NULL));
    //Mostrar bienvenida

    bool winAEnemigo1 = false;
    bool winAEnemigo2 = false;
    bool winAEnemigo3 = false;
    bool winAEnemigo4 = false;
    bool finalEnemigo = false;
    welcome();

    //Introduccion de datos en el constructor
    Personaje Heroe(2000, 0, "Goku", 0, 0);
    Personaje Enemigo1(150, 20, "Pilaf", 0, 0);
    Personaje Enemigo2(250, 80, "Capitan Blue", 0, 0);
    Personaje Enemigo3(350, 120, "Tao Pai Pai", 0, 0);
    Personaje Enemigo4(450, 160, "Satanas Cor petit", 0, 0);
    EnemigoFinal EnemigoFinal(1000, 0, "Freezer", 0, 0, 0, 0);
    char opcion;
    cout << "\n";
    do {
        cout << "Empezamos el juego? : 's' o 'n' :" << endl;
        cin >> opcion;
        switch (opcion) {
        case 's':
            cout << endl;
            char tabla[FILAS][COLUMNAS]; // Definir el tablero

            // Inicializar el tablero
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    tabla[i][j] = ' ';
                }
            }

            int posicionXHeroe, posicionYHeroe; // Declarar las variables fuera del switch
            posicionXHeroe = rand() % COLUMNAS; // Generar valor aleatorio para X (columnas)
            posicionYHeroe = 0; // Primera fila
            int posXEnemigo1, posYEnemigo1, posXEnemigo2, posYEnemigo2, posXEnemigo3, posYEnemigo3, posXEnemigo4, posYEnemigo4, posXEneFinal, PosYEneFinal;
            posXEnemigo1 = rand() % COLUMNAS;
            posYEnemigo1 = 2; //3era fila
            posXEnemigo2 = rand() % COLUMNAS;
            posYEnemigo2 = 3; // 4ta fila
            posXEnemigo3 = rand() % COLUMNAS;
            posYEnemigo3 = 5; //6ta fila
            posXEnemigo4 = rand() % COLUMNAS;
            posYEnemigo4 = 7; //8va fila
            posXEneFinal = rand() % COLUMNAS;
            PosYEneFinal = 9; //9ena fila
            Enemigo1.setPosX(posXEnemigo1);
            Enemigo1.setPosY(posYEnemigo1);
            Enemigo2.setPosX(posXEnemigo2);
            Enemigo2.setPosY(posYEnemigo2);
            Enemigo3.setPosX(posXEnemigo3);
            Enemigo3.setPosY(posYEnemigo3);
            Enemigo4.setPosX(posXEnemigo4);
            Enemigo4.setPosY(posYEnemigo4);
            EnemigoFinal.setPosX(posXEneFinal);
            EnemigoFinal.setPosY(PosYEneFinal);
            Heroe.setPosX(posicionXHeroe);
            Heroe.setPosY(posicionYHeroe);
            tabla[posicionYHeroe][posicionXHeroe] = ' H ';
            tabla[posYEnemigo1][posXEnemigo1] = '   ';
            tabla[posYEnemigo2][posXEnemigo2] = '   ';
            tabla[posYEnemigo3][posXEnemigo3] = '   ';
            tabla[posYEnemigo4][posXEnemigo4] = '   ';
            tabla[PosYEneFinal][posXEneFinal] = '   ';
            mostrarTabla(tabla, posicionXHeroe, posicionYHeroe, posXEnemigo1, posYEnemigo1, posXEnemigo2, posYEnemigo2, posXEnemigo3, posYEnemigo3, posXEnemigo4, posYEnemigo4, posXEneFinal, PosYEneFinal);
            char movimiento;
            do
            {
                cout << "\nSelecciona el movimiento del heroe: (w-[arriba]/s-[abajo]/d-[derecha]/a-[izquierda])  [n-para salir] : ";
                cin >> movimiento;
                int nuevaPosX = Heroe.getPosX();
                int nuevaPosY = Heroe.getPosY();

                // Actualizar la posición según el movimiento seleccionado
                switch (movimiento)
                {
                case 'w':
                    nuevaPosY--;
                    break;
                case 'a':
                    nuevaPosX--;
                    break;
                case 's':
                    nuevaPosY++;
                    break;
                case 'd':
                    nuevaPosX++;
                    break;
                case 'n':
                    cout << "Ahora saldras del juego" << endl;
                    break;
                default:
                    cout << "Has hecho un movimiento que no es permitido";
                    break;
                }
                if (nuevaPosX >= 0 && nuevaPosX < COLUMNAS && nuevaPosY >= 0 && nuevaPosY < FILAS) {
                    // Actualizar la posición del héroe
                    tabla[Heroe.getPosY()][Heroe.getPosX()] = ' '; // Borra la posicion anterior
                    Heroe.setPosX(nuevaPosX);
                    Heroe.setPosY(nuevaPosY);
                    tabla[Heroe.getPosY()][Heroe.getPosX()] = 'H';
                    mostrarTabla(tabla, Heroe.getPosX(), Heroe.getPosY(), Enemigo1.getPosX(), Enemigo1.getPosY(), Enemigo2.getPosX(), Enemigo2.getPosY(), Enemigo3.getPosX(), Enemigo3.getPosY(), Enemigo4.getPosX(), Enemigo4.getPosY(), EnemigoFinal.getPosX(), EnemigoFinal.getPosY());



                    //Cuando el heroe encuentra a enemigo1
                    if (Heroe.getPosX() == Enemigo1.getPosX() && Heroe.getPosY() == Enemigo1.getPosY())
                    {
                        if (!winAEnemigo1)
                        {
                            while (!winAEnemigo1)
                            {
                                Sleep(900);
                                cout << Heroe.getName() << " acaba de encontrar a su primer enemigo " << Enemigo1.getName() << endl;
                                Sleep(900);
                                cout << "La vida de estos dos personajes es: " << Heroe.getName() << " con: " << Heroe.getVida() << " y " << Enemigo1.getName() << " con " << Enemigo1.getVida() << endl;
                                Sleep(900);
                                cout << Enemigo1.getName() << " Sin pensarlo dos veces ataca primero, y este es el hit que le hace a nuestro heroe: " << endl;
                                Sleep(900);
                                Heroe.setVida(Heroe.getVida() - Enemigo1.getAtak());
                                cout << Enemigo1.getAtak() << " de danyo. A nuestro heroe le quedan " << Heroe.getVida() << endl;
                                Sleep(900);
                                cout << "Pulsa enter para continuar con la pelea de Goku: " << endl;
                                _getch();
                                cout << "Nuestro Goku, lanza un ataque a " << Enemigo1.getName() << " que lo manda a volar ...." << endl;
                                Sleep(900);
                                Heroe.setAtak(150 + rand() % (170 - 150));
                                Sleep(900);
                                Enemigo1.setVida(Enemigo1.getVida() - Heroe.getAtak());
                                cout << "El hit que mando a volar a nuestro primer enemigo fue de " << Heroe.getAtak() << endl;
                                Sleep(900);
                                if (Enemigo1.getVida() <= 0)
                                {
                                    cout << "Se acabo la pelea con el primer enemigo" << endl;
                                    winAEnemigo1 = true;

                                }

                            }
                        }
                        else {
                            cout << "Ya has ganado la pelea con el primer enemigo" << endl;
                        }
                    }
                    if (Heroe.getPosX() == Enemigo2.getPosX() && Heroe.getPosY() == Enemigo2.getPosY())
                    {
                        if (!winAEnemigo2)
                        {
                            while (!winAEnemigo2)
                            {
                                Sleep(900);
                                cout << "Goku acaba de encontrar a su segundo enemigo. Pertany a l'exercit de la cinta vermella" << endl;
                                Sleep(900);
                                cout << Enemigo2.getName() << " hace una risita odiosa y eso da inicio al segundo combate" << endl;
                                Sleep(900);
                                cout << Enemigo2.getName() << " le da un hit a Goku de: " << Enemigo2.getAtak() << endl;
                                Heroe.setVida(Heroe.getVida() - Enemigo2.getAtak());
                                Sleep(900);
                                cout << "la vida de " << Heroe.getName() << " es de " << Heroe.getVida() << endl;
                                Sleep(900);
                                cout << "Pulsa enter para continuar con la pelea de Goku: " << endl;
                                _getch();
                                Sleep(900);
                                cout << "Goku coge distancia, concentra su fuerza y dice kaaaa meee haaa meeeee haaaa!" << endl;
                                Heroe.setAtak(250 + rand() % (350 - 250));
                                Sleep(900);
                                cout << "Capitan Blue recibio el impacto de lleno y quedo churruscado sin poder seguir la pelea" << endl;
                                Sleep(900);
                                Enemigo2.setVida(Enemigo2.getVida() - Heroe.getAtak());
                                Sleep(900);
                                cout << "el ataque de goku fue de " << Heroe.getAtak() << " y la vida de " << Enemigo2.getName() << " es de " << Enemigo2.getVida() << endl;
                                Sleep(900);
                                if (Enemigo2.getVida() <= 0)
                                {
                                    cout << "Se acabo la pelea" << endl;
                                    winAEnemigo2 = true;
                                }
                            }
                        }
                        else {
                            cout << "Ya has ganado la pelea contra el segundo enemigo" << endl;
                        }
                    }

                    if (Heroe.getPosX() == Enemigo3.getPosX() && Heroe.getPosY() == Enemigo3.getPosY())
                    {
                        if (!winAEnemigo3)
                        {
                            while (!winAEnemigo3)
                            {
                                Sleep(900);
                                cout << Enemigo3.getName() << " aparece de repente encima de un pilar, a toda velocidad, hacia la direccion de nuestro heroe" << endl;
                                Sleep(900);
                                cout << "Cuando se aproxima y esta cerca de el, salta para darle un hit de " << Enemigo3.getAtak() << endl;
                                Sleep(900);
                                Heroe.setVida(Heroe.getVida() - Enemigo3.getAtak());
                                Sleep(900);
                                cout << "Goku sale disparado hacia una roca y se estampa en ella. A nuestro heroe le quedan " << Heroe.getVida() << " de vida" << endl;
                                Sleep(900);
                                cout << "Pulsa enter para continuar con la pelea de Goku: " << endl;
                                Sleep(900);
                                _getch();
                                Sleep(900);
                                cout << Heroe.getName() << " dice: Allargat basto! y le da tremendo golpetaso a " << Enemigo3.getName() << endl;
                                Sleep(900);
                                Heroe.setAtak(350 + rand() % (450 - 350));
                                Sleep(900);
                                Enemigo3.setVida(Enemigo3.getVida() - Heroe.getAtak());
                                cout << "El golpe de Goku fue de " << Heroe.getAtak() << " y la vida de Tao es " << Enemigo3.getVida() << endl;
                                Sleep(900);

                                if (Enemigo3.getVida() <= 0)
                                {
                                    cout << "Se acabo la pelea" << endl;
                                    winAEnemigo3 = true;
                                }
                            }
                        }
                        else {
                            cout << "Ya has ganado la pelea contra el tercer enemigo" << endl;
                        }
                    }
                    if (Heroe.getPosX() == Enemigo4.getPosX() && Heroe.getPosY() == Enemigo4.getPosY())
                    {
                        if (!winAEnemigo4)
                        {
                            while (!winAEnemigo4)
                            {
                                Sleep(900);
                                cout << "Aparece un enemigo terrible...Goku sabe que lo va a tener dificil. Es un poderoso guerrero de Namak. Su nombre es " << Enemigo4.getName() << endl;
                                Sleep(900);
                                cout << "Empieza la pelea, golpeando " << Enemigo4.getName() << ", Es un gran guerrero. Cuenta con habilidad y golpes precisos." << endl;
                                Sleep(900);
                                Heroe.setVida(Heroe.getVida() - Enemigo4.getAtak());
                                Heroe.setVida(Heroe.getVida() - Enemigo4.getAtak());
                                cout << "Nuestro heroe encaja un par de golpes que le hacen danyo. Golpe de: " << Enemigo4.getAtak() << " y a Goku le quedan estos puntos de vida: " << Heroe.getVida() << endl;
                                Sleep(900);
                                cout << "Ya llevan un buen rato de pelea y nuestro amigo esta bien golpeado y cansado. Es hora de ponerle punto y final a esta pelea!" << endl;
                                Sleep(900);
                                cout << "Pulsa enter para continuar con la pelea de Goku: " << endl;
                                Sleep(900);
                                _getch();
                                cout << "Piccolo se encuentra suspendido en el aire, mirando a goku. En un parpadeo Goku se impulso hacia el desde el suelo" << endl;
                                Sleep(900);
                                cout << "El golpe fue terrible porque le atreveso por la mitad." << endl;
                                Heroe.setAtak(450 + rand() % (455 - 450));
                                Enemigo4.setVida(Enemigo4.getVida() - Heroe.getAtak());
                                Sleep(900);
                                cout << "Golpe de " << Heroe.getAtak() << " y la vida de " << Enemigo4.getName() << " es de" << Enemigo4.getVida() << endl;

                                if (Enemigo4.getVida() <= 0)
                                {
                                    cout << "Se acabo la pelea" << endl;
                                    winAEnemigo4 = true;
                                }
                            }
                        }
                        else {
                            cout << "Ya has ganado la pelea contra el cuarto enemigo" << endl;
                        }
                    }
                    if (Heroe.getPosX() == EnemigoFinal.getPosX() && Heroe.getPosY() == EnemigoFinal.getPosY())
                    {
                        while (!finalEnemigo)
                        {
                            EnemigoFinal.entradaEnemigo();
                            Heroe.luchaEnemigoFinal();
                            EnemigoFinal.setVida(EnemigoFinal.getVida() - Heroe.getAtak());
                            EnemigoFinal.statsFreezer();
                            EnemigoFinal.ataqueNormal();
                            Heroe.setVida(Heroe.getVida() - EnemigoFinal.getAtak());
                            Heroe.statsGoku();
                            Heroe.otraRonda();
                            EnemigoFinal.setVida(EnemigoFinal.getVida() - Heroe.getAtak());
                            EnemigoFinal.statsFreezer();
                            EnemigoFinal.ataqueEnemigoFinal();
                            Heroe.setVida(Heroe.getVida() - EnemigoFinal.getAtak());
                            Heroe.statsGoku();
                            Sleep(900);
                            cout << "goku malherido vuelve a atacar" << endl;
                            Sleep(900);
                            Heroe.setAtak(200 + rand() % (300 - 200));
                            Sleep(900);
                            cout << "El ataque ha sido de " << Heroe.getAtak()<<endl;
                            Sleep(900);
                            EnemigoFinal.setVida(EnemigoFinal.getVida() - Heroe.getAtak());
                            EnemigoFinal.statsFreezer();
                            EnemigoFinal.ataqueEnemigoFinal();
                            Heroe.setVida(Heroe.getVida() - EnemigoFinal.getAtak());
                            Heroe.statsGoku();
                            Heroe.bolaGenkiDama();
                            EnemigoFinal.setVida(EnemigoFinal.getVida() - Heroe.getAtak());
                            EnemigoFinal.statsFreezer();
                            if (EnemigoFinal.getVida() <= 0)
                            {
                                cout << "El todo poderoso Freezer ha muerto por un Guerrero del espacio" << endl;
                                cout << "Nuestro heroe Es el ganadorde esta batalla";
                                finalEnemigo = true;
                            }
                        }
                    }

                }
                else if (movimiento != 'n') {
                    cout << "Movimiento no valido. El heroe se mantiene en su posicion actual." << endl;
                }


            } while (movimiento != 'n' &&!finalEnemigo);

            break;
        case 'n':
            cout << "Que cobarde!" << endl;
            break;
        default:
            cout << "Pulsa si o no con 's' o 'n'\n";
            break;
        }
    } while (opcion != 'n' && !finalEnemigo);

    return 0;
}


