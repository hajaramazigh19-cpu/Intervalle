#include "Tableau.h"
#include<iostream>
using namespace std;
Tableau::Tableau(int t)
{
	this->taille = t;
	tableau = new float[taille];
	for (int i = 0;i < taille;i++) {
		tableau[i] = 0;
	}

}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	tableau = new float[this->taille];
	for (int i = 0;i < this->taille;i++) {
		tableau[i] = T.tableau[i];
	}


}

Tableau& Tableau::operator=(const Tableau& T)
{
	
	if (this != &T) {
		taille = T.taille;
		delete[] tableau;
		tableau = nullptr;
		this->tableau = new float[taille];
		for (int i = 0;i < this->taille;i++) {
			this->tableau[i] = T.tableau[i];
		}
	}
	return *this ;
}

Tableau::~Tableau()
{ 
	delete[] tableau;
}


void Tableau::afficher() const
{
	for (int i = 0; i < taille; i++)
		cout << tableau[i] << " " << endl;
}


float& Tableau::operator[](int i)


{
	if (i >= 0 && i < taille){
		return this->tableau[i];
}
else {
	exit(-1);
	}
	
}
 
float& Tableau::operator[](int i)const


{
	if (i >= 0 && i < taille) {
		return this->tableau[i];
	}
	else {
		exit(-1);
	}

}