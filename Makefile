CC=g++
CPPFLAGS=-Wall -Wextra -std=c++0x -g

prog: Chaine.o Personne.o Etudiant.o Enseignant.o EleveVacataire.o Main.o
	$(CC) $^ -o $@

Programme.o: Chaine.hpp

Chaine.o: Chaine.hpp

Personne.o: Personne.hpp

Etudiant.o: Etudiant.hpp

Enseignant.o: Enseignant.hpp

EleveVacataire.o: EleveVacataire.hpp

Main.o: Chaine.hpp Personne.hpp Etudiant.hpp



clean:
	rm -f *.o prog