#include "filiere.h"
#include <iostream>

using namespace std;

int main() {
	Etudiant mostfa(1, 89100200, 3, { {"physique", 2, 15}, { "math", 3, 17 }, {"info", 2, 16} });
	Etudiant ryadh(2, 25604450, 3, { {"physique", 2, 8}, { "math", 3, 10 }, {"info", 2, 11} });
	Etudiant salah(3, 20100350, 3, { {"physique", 2, 9}, { "math", 3, 9 }, {"info", 2, 12} });
	Etudiant bechir(4, 55234890, 3, { {"physique", 2, 20}, { "math", 3, 20 }, {"info", 2, 20} });
	Filiere im(1, 2, { ryadh, bechir });
	Filiere mi(2, 2, { mostfa, salah });
	for(auto& et : im.getEtudiants()){
		et.calcul_moyenne();
	}
	for(auto& et : mi.getEtudiants()){
		et.calcul_moyenne();
	}
	cout << "Etudiants de la filiere 1\n";
	im.afficher();
	cout << "Etudiants de la filiere 2\n";
	mi.afficher();
	cout << "Etudiants qui on reussi de la filiere 1\n";
	for(auto& et : im.getEtudiants()){
		if(et.reussi()){
			et.afficher();
			cout << endl;
		}
	}
	cout << "Etudiants qui on reussi de la filiere 2\n";
	for(auto& et : mi.getEtudiants()){
		if(et.reussi()){
			et.afficher();
			cout << endl;
		}
	}
}
