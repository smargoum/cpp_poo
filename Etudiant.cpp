#include"Etudiant.hpp"
namespace enseirb{
    Etudiant::Etudiant(const Chaine &nom, const Chaine &f) : Personne(nom){
        _filiere = f;
    } 
    
    const Chaine &Etudiant::filiere() {
        return _filiere;
    }

    const Chaine &Etudiant::enseignement() {
        return _enseignement;
    }

    void Etudiant::setEnseignement(const Chaine &e) {
        _enseignement = e;
    }

    const Chaine Etudiant::nom() const {
        return Chaine("Eleve:")+Personne::nom();
    }

    Etudiant::~Etudiant(){}

}