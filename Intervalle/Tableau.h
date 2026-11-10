#pragma once

class Tableau
{
protected:
	int taille;
	float* tableau;

public:
	Tableau(int);
	Tableau(const Tableau&);
	Tableau& operator=(const Tableau&);
	void afficher();
	~Tableau();
	void afficher() const;
	float& operator[](int i);
	float& operator[](int i)const;
	

};

