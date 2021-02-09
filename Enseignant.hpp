#ifndef __ENSEIGNANT__
#define __ENSEIGNANT__

#include"Etudiant.hpp"

namespace enseirb{
    class Enseignant : public virtual Personne {
        int _service;
        public : 
            Enseignant(const Chaine &nom);
            Enseignant(int, const Chaine &);
            int nbHeure() const;
            virtual const Chaine nom() const;
            virtual ~Enseignant();
    };
}

#endif