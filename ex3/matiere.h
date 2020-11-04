#ifndef MATIERE_GUARD
#define MATIERE_GUARD

#include <string>

class Matiere {
	std::string intitule;
	double coefficient, note;
	public:
		Matiere() {}
		Matiere(const std::string& intitu, double coeff, double n): intitule(intitu), coefficient(coeff), note(n) {}
		void setIntitule(const std::string&);
		std::string getIntitule() const ;
		void setCoefficient(double coeff);
		double getCoefficient() const ;
		void setNote(double);
		double getNote() const ;
};

#endif
