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
	Representants representants[2];
	Techniciens techniciens[3];
	Interimaires interimaires[5];
	int cptvendeurs = 0, cptrepresentants = 0, cpttechniciens = 0, cptinterimaires = 0;
public:
	void setNom(int n);
	string getNom();
	void setVendeurs(Vendeurs v);
	void setRepresentants(Representants r);
	void setTechniciens(Techniciens t);
	void setInterimaires(Interimaires i);
	string getVendeurs();
	string getRepresentants();
	string getTechniciens();
	string getInterimaires();



};

