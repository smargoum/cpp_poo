#include"Personne.hpp"

namespace enseirb{
    Personne::Personne(const Chaine &c) {
        _nom = c;
    }
    const Chaine Personne::nom() const{
        return _nom;
    }
    Personne::~Personne(){}
}