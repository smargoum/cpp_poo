
#ifndef __ELEVEVACATAIRE__ 
#define __ELEVEVACATAIRE__ 

#include"Enseignant.hpp"

namespace enseirb{
    class EleveVacataire : public Enseignant , public Etudiant {
        public :
            EleveVacataire(const Chaine &nom, const Chaine &f, int ns);
            virtual const Chaine nom() const;
            virtual ~EleveVacataire();
    };
}


#endif 