#include"EleveVacataire.hpp"

namespace enseirb { 
    EleveVacataire::EleveVacataire(const Chaine &nom, const Chaine &f, int ns):Personne(nom),Etudiant(nom,f),Enseignant(ns,nom){}
    const Chaine EleveVacataire::nom() const {
        return Enseignant::nom() + " , " + Etudiant::nom();
    }
    EleveVacataire::~EleveVacataire(){}
}