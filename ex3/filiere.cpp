#include "filiere.h"
#include <iostream>

using namespace std;

Filiere::Filiere(int id, int nbr, const vector<Etudiant> vec): id_filiere(id), nbr_etudiants(nbr), etudiants(vec) {}

void Filiere::afficher() const {
	for(int i = 0; i < (int) etudiants.size(); i++){
		etudiants[i].afficher();
		cout << endl;
	}
}
