#pragma once
#include <string>
using namespace std

class Carte {

private :
  
  int indice;
  int transaction;
  bool positionGlobale; /* vaut true si le changement de position est "global" (par exemple "Allez à la Rue de la Paix") et false sinon (par exemple "Réculez de 3 cases") */
  int changePostion;
  string description;
  bool isLiberation;
  bool isReparation;
  
 
public :
  Carte(int, int,bool, int,string,int isLiberation=false,int isReparation=false);
  void action(Joueur);
  
};
