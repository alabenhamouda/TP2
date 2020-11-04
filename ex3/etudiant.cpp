#include <iostream>
#include "etudiant.h"

using namespace std;

Etudiant::Etudiant(int num, int tel, int nbr, const vector<Matiere>& vec): num_carte(num), telephone(tel), nbr_matieres(nbr), matieres(vec) {}

double Etudiant::calcul_moyenne(){
	double den = 0;
	for(int i = 0; i < (int) matieres.size(); i++){
		const Matiere& mat = matieres[i];
		moyenne += mat.getNote() * mat.getCoefficient();
		den += mat.getCoefficient();
	}
	return moyenne /= den;
}
bool Etudiant::reussi() const {
	return moyenne >= 10;
}
void Etudiant::afficher() const {
	cout << "num: " << num_carte << "\ttelephone: " << telephone << "\tmoyenne: " << moyenne;
}
