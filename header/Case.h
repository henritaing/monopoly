#pragma once
#include <string>
using namespace std;

class Case
{
	private:
		string nom;
		Case* suivante;

	public:
		//Getters 
		string getNom();
		Case* getSuivante();

		//Setters
		void setNom(string nom);
		void setSuivante(Case suivante);

		//Actions
		void arreterSur();

};

