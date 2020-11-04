#ifndef ETUDIANT_GUARD
#define ETUDIANT_GUARD

#include "matiere.h"
#include <vector>

class Etudiant {
	int num_carte, telephone, nbr_matieres;
	double moyenne;
	std::vector<Matiere> matieres;
	public:
		Etudiant() {};
		Etudiant(int num, int tel, int nbr, const std::vector<Matiere>& mat);
		int getNum() const {
			return num_carte;
		}
		int getTel() const {
			return telephone;
		}
		int getNbr() const {
			return nbr_matieres;
		}
		void setNum(int num){
			num_carte = num;
		}
		void setTel(int tel){
			telephone = tel;
		}
		void setNbr(int nbr){
			nbr_matieres = nbr;
		}
		double calcul_moyenne();
		bool reussi() const;
		void afficher() const;
};

#endif
