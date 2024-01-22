#include "Entreprise.h"

void Entreprise::setNom(int n)
{
	nom = n;
}

string Entreprise::getNom()
{
	return nom;
}

void Entreprise::setVendeurs(Vendeurs v)
{
	vendeurs[cptvendeurs] = v;
	cptvendeurs = cptvendeurs + 1;
}

void Entreprise::setRepresentants(Representants r)
{
	representants[cptrepresentants] = r;
	cptrepresentants = cptrepresentants + 1;
}

void Entreprise::setTechniciens(Techniciens t)
{
	techniciens[cpttechniciens] = t;
	cpttechniciens = cpttechniciens + 1;
}

void Entreprise::setInterimaires(Interimaires i)
{
	interimaires[cptinterimaires] = i;
	cptinterimaires = cptinterimaires + 1;
}

string Entreprise::getVendeurs()
{
	

}

string Entreprise::getRepresentants()
{
	

}

string Entreprise::getTechniciens()
{
	

}

string Entreprise::getInterimaires()
{
	

}
