#include"EleveVacataire.hpp"
#include<iostream>

using namespace enseirb;

const static Personne saad("Moro");

void afficheNom(const Personne &p = saad) {
    std::cout<<"<";
    for(unsigned int i = 0 ; i < p.nom().taille() ;i++){
        std::cout<<(p.nom())[i];
    }
    std::cout<<">"<<std::endl;
}

// on va essayer d'implémenter un opérateur qui affiche une personne

std::ostream &operator<<(std::ostream &stream, const Personne &p) {
    stream<<"<";
    for(unsigned int i = 0 ; i < p.nom().taille() ;i++){
        stream<<(p.nom())[i];
    }
    stream<<">";
} 

int main()
{
    Personne e1("saad margoum");
    afficheNom(e1);
    Etudiant e2("saad","info");
    // puisque on fait un appel de fonction affichenom qui prend une personne en 
    // argument on fait un casting implicite
    afficheNom(e2);

    printf("///////////////////////////\n");
    Enseignant prof("mhamdi");
    afficheNom(prof);

    printf("héritage multiple\n");
    printf("///////////////////////////\n");
    EleveVacataire test("Hamza","Informatique",10);
    afficheNom(test);
    printf("Test de l'opérateur d'affichage\n");
    std::cout<<e1<<std::endl;
    return 0;
}