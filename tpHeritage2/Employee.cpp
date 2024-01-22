#include "Employee.h"

float Employee::calculSalaire()
{
	return 0.0f;
}

void Employee::affiche()
{
}

void Employee::setPrenom(int prenom1)
{
	prenom = prenom1;
}

void Employee::setNom(int nom1)
{
	nom = nom1;
}

void Employee::setAge(int age1)
{
	age = age1;
}

string Employee::getPrenom()
{
	return prenom;
}

string Employee::getNom()
{
	return nom;
}

int Employee::getAge()
{
	return age;
}
