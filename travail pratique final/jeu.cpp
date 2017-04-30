#include "jeu.h"
#include "Coord.h"
#include "ExtraTerrestre.h"
#include "Laser.h"
#include "Martien.h"
#include "Vaisseau.h"
#include "timer.h"
#include "UIKit.h"
#include <conio.h>
#include<iostream>
using namespace std;
#define MAX_LASER 5
//flecheDroite = 77, flecheGauche = 75
Jeu::Jeu(Vaisseau monVaisseau, int niveau) {
	this->maxLaser = MAX_LASER;
	touche = 'p';
	finDeJeu = false;
	for (int i = 0; i < MAX_LASER; i++)
		tabLaser[i].isAlive = false;


}
void Jeu::jouez() {
	Timer timeVaisseau(100);
	Timer timeLaser(100);
	Timer timeMartien(50);
	while (!finDeJeu)
	{
		if (_kbhit())
		{
			recuperertouche();
			creerLasers();
			if (timeVaisseau.estPret())
				monVaisseau.modifierPosition(touche);
		}
		if (timeLaser.estPret())
			deplacerLaser();
	}

}

void Jeu::recuperertouche() {
	int frappe;
	touche = NULL;
	frappe = _getch();
	if (frappe == int('f') || frappe == int('F'))
		touche = ' ';
	else if (frappe == 224)
	{
		frappe = _getch();
		if (frappe == 77)
			touche = 'l';
		else if (frappe == 75)
			touche = 'k';

		//else touche = 'p';
	}
}

void Jeu::creerLasers() {

	if (touche == ' ')
	{
		int i = 0;
		while (i < MAX_LASER && tabLaser[i].isAlive)
			i++;
		if (i < MAX_LASER)
			tabLaser[i].startLaser(monVaisseau.coord.getPositionX());

	}
}


void Jeu::deplacerLaser() {

	for (int i = 0; i < MAX_LASER; i++)
		if (tabLaser[i].isAlive)
			tabLaser[i].moveLaser();
}



void Jeu::martien() {

}