#ifndef __PERSONNE__
#define __PERSONNE__

#include<cstdio>
#include<cstring>
#include"Chaine.hpp"


namespace enseirb {
    class Personne {
        Chaine _nom;
        public:
            Personne(const Chaine &);
            virtual const Chaine nom() const;
            virtual ~Personne();
    };
}


#endif 