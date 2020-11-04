#ifndef FILIERE_GUARD
#define FILIERE_GUARD

#include "etudiant.h"
#include <vector>

class Filiere {
	int id_filiere, nbr_etudiants;
	std::vector<Etudiant> etudiants;
	public:
		Filiere() {}
		Filiere(int id, int nbr, const std::vector<Etudiant> vec);
		int getIdFiliere() const {
			return id_filiere;
		}
		int getNbrEtudiants() const {
			return nbr_etudiants;
		}
		void setIdFiliere(int id){
			id_filiere = id;
		}
		void setNbrEtudiants(int nbr){
			nbr_etudiants = nbr;
		}
		std::vector<Etudiant>& getEtudiants(){
			return etudiants;
		}
		void afficher() const ;
};

#endif
