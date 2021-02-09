#include"Enseignant.hpp"

namespace enseirb {
    Enseignant::Enseignant(const Chaine &nom):Personne(nom), _service(0){}

    Enseignant::Enseignant(int nb , const Chaine &nom): Personne(nom), _service(nb){}
    
    int Enseignant::nbHeure() const {
        return _service;
    }
    
    const Chaine Enseignant::nom() const {
        return Chaine("Enseignant:")+Personne::nom();
    }
    
    Enseignant::~Enseignant(){}
}