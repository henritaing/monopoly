#include "Chance.h"

Chance :: Chance(string nom) : Case(nom) {
}

void Chance::arreterSur(Joueur joueur)
{
	this->arretCase(joueur);
}
