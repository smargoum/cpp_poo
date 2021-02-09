#ifndef __ETUDIANT__ 
#define __ETUDIANT__ 

#include"Personne.hpp"

namespace enseirb{
    
    class Etudiant : public virtual Personne{
        Chaine _filiere;
        Chaine _enseignement;
        public:
            Etudiant(const Chaine &nom, const Chaine &f);   
            const Chaine &filiere();
            const Chaine &enseignement();
            void setEnseignement(const Chaine &); 
            virtual const Chaine nom() const;
            virtual ~Etudiant();
    };

}


#endif