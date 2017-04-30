#pragma once

#include"Coord.h"
#include"ExtraTerrestre.h"
#include"Laser.h"
#include"Martien.h"
#include"Vaisseau.h"
#include"timer.h"
#include"UIKit.h"
#include<iostream>
using namespace std;
#define MAX_LASER 5
#define MAX_MARTIEN 5

class Jeu {
	Vaisseau monVaisseau;
	char touche;
	bool finDeJeu;
	int maxLaser;
	int niveau;
	Laser tabLaser[MAX_LASER];
	Martien tabMartien[MAX_MARTIEN];
	
public:
	Jeu(Vaisseau monVaisseau,int niveau);
	void jouez();
	void recuperertouche();
	void creerLasers();
	void deplacerLaser();
	void martien();
};






