#include"Coord.h"
#include"ExtraTerrestre.h"
#include"Laser.h"
#include"Martien.h"
#include"Vaisseau.h"
#include"UIKit.h"
#include<iostream>
#include"timer.h"
#include<conio.h>
#include"jeu.h"
#define MAX_LASERS 20
using namespace std;




int main()
{
		UIKit::curseurVisible(false);
		Vaisseau monVaisseau;
		Jeu monjeu(monVaisseau,5);
		monjeu.jouez();
		
		//bool finDeJeu = false;

		////	le vaisseau du joueur
		//Vaisseau monVaisseau;
		//Timer timerVaisseau(100);

		////	un laser (pas à l'écran au début)
		//Laser mesLasers[MAX_LASERS];
		//for (int i = 0; i < MAX_LASERS; i++)
		//	mesLasers[i].isAlive = false;
		//Timer timerLaser(70);

		////	boucle principale de jeu
		//while (!finDeJeu) {
		//	//	gestion du clavier
		//	if (_kbhit() && timerVaisseau.estPret()) {
		//		char touche = _getch();

		//		if (touche == ' ') {
		//			//	on recherche un laser libre
		//			int i = 0;
		//			while (i < MAX_LASERS && mesLasers[i].isAlive)
		//				i++;

		//			if (i < MAX_LASERS) {
		//				mesLasers[i].startLaser(monVaisseau.coord.getPositionX());
		//			}
		//		}
		//		else {
		//			monVaisseau.modifierPosition(touche);
		//		}
		//	}

		//	//	on déplace le laser
		//	if (timerLaser.estPret())
		//		for (int i = 0; i < MAX_LASERS; i++)
		//			if (mesLasers[i].isAlive)
		//				mesLasers[i].moveLaser();
		//}



	return 0;
}