#include "TableauBorne.h"
#include<iostream>

TableauBorne::TableauBorne(float bg, float bd, int taille) :Tableau(taille)

{
    this->bornegauche = bg;
    this->bornedroite = bd;
    if (bg > bd) {
        float tmp = bg;
        bg = bd;
        bd = tmp;
    }

    for (int i = 0; i < this->taille; i++) { // valeurs initiales dans l'intervalle
        tableau[i] = (bg+bd)/2;
    }

}


float TableauBorne::operator[](int i) const
{
	return Tableau::operator[](i);
    }

TableauBorne::~TableauBorne()
{
}
    

