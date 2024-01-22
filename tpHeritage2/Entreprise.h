#pragma once

#include <iostream>
#include "Commerciaux.h"
#include "Employee.h"
#include "Interimaires.h"
#include "Representants.h"
#include "Techniciens.h"
#include "Vendeurs.h"

using namespace std;
class Entreprise
{
private:
	string nom;
	Vendeurs vendeurs[5];
	Representants representant[2];
	Techniciens techniciens[3];
	Interimaires interimaires[5];
public:
	void setNom(int n);
	string getNom();
	void setVendeurs(int v);


};

