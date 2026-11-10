#pragma once
#include "Tableau.h"
class TableauBorne : public Tableau
{
private:
	float bornegauche;
	float bornedroite;
public:
	TableauBorne(float , float, int);
	 float operator[](int i ) const  ;
	 ~TableauBorne();
};

