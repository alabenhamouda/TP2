#include "matiere.h"

using namespace std;

string Matiere::getIntitule() const {
	return intitule;
}
void Matiere::setIntitule(const string& s){
	intitule = s;
}
double Matiere::getCoefficient() const {
	return coefficient;
}
void Matiere::setCoefficient(double coeff){
	coefficient = coeff;
}
double Matiere::getNote() const {
	return note;
}
void Matiere::setNote(double n){
	note = n;
}
