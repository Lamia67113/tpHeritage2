#pragma once
#include <iostream>
using namespace std;
class Employee
{
private:
	string nom;
	string prenom;
	int age;
public:
	float calculSalaire();
	void affiche();
	void setPrenom(int prenom1);
	void setNom(int nom1);
	void setAge(int age1);
	string getPrenom();
	string getNom();
	int getAge();

};

