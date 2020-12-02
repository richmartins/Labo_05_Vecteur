/*-----------------------------------------------------------------------------------
Laboratoire    : LABO 05 Vecteur
Fichier        : librairie.cpp
Auteur(s)      : Kossi Didier Lokokpe, Martins Tenorio Richard V.
Classe         : PRG1-B
Date creation  : 30.11.20
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------*/

#include "librairie.h"

#include <vector>
#include <algorithm>

int sommeVect(Vecteur& v){
    int sum = 0;
    for(auto i : v){
        sum += i;
    }
    return sum;
}

std::ostream& operator<<(std::ostream& os, const Vecteur& v) {
    os << "(";
    for(Vecteur::const_iterator i = v.begin(); i != v.end(); ++i){
        if (i!=v.begin()){
            os << ", ";
        }
        os << *i;
    }
    os << ")";

    return os;
}

std::ostream& operator<<(std::ostream& os, const Matrice& m) {
    os << "[";
    for(Matrice::const_iterator i = m.begin(); i != m.end(); ++i){
        if(i != m.begin())
            os << ", ";
        os << "(" << *i << ")";
    }
    os << "]";
}

bool estCarree(Matrice& m){
    size_t nbrLigne = 0;
    const size_t PREMIERE_LIGNE = m[0].size();

    for(const Vecteur& ligne : m){
        if(ligne.size() != PREMIERE_LIGNE){
            return false;
        } else {
            ++nbrLigne;
        }
    }

    if(nbrLigne == PREMIERE_LIGNE){
        return true;
    }
    return false;
}

bool EstReguliere(Matrice& m){

    const size_t PREMIERE_LIGNE = m[0].size();

    //TODO: do it without anonymous fonction
//    if(std::all_of(m.begin(), m.end(), [premiereLigne](const Vecteur& ligne) {return ligne.size() != premiereLigne;})){
//      return false;
//    }
    return true;
}

size_t maxCol(Matrice& m){
    size_t maxCol = m[0].size();

    for(const Vecteur& ligne : m){
        if(ligne.size() > maxCol){
            maxCol = ligne.size();
        }
    }

    return maxCol;
}

Vecteur sommeLigne(Matrice& m){
    Vecteur totSum;

    for( Vecteur& i : m){
        totSum.push_back(sommeVect(i));
    }

    return totSum;
}

Vecteur vectSommeMin(Matrice& m){
    Vecteur minVect;
    for(auto i = m.begin(); i != m.begin(); ++i){
        if(i == m.begin() || sommeVect(minVect) > sommeVect(*i))
            minVect = *i;
    }

    return minVect;
}

void shuffleMatrice(Matrice m){

}

void sortMatrice(const Matrice& m){
    for(const Vecteur& i : m){
        std::sort(i.begin(), i.end(), std::greater<>());
    }
}

bool sommeDiagDG(const Matrice& m, int& resultat){ // </>

   Vecteur lignes;

   bool ok = false;

   int somme = 0;

   resultat = somme;

   size_t taille = m.size();
   size_t taille2 = lignes.size();

   if( !lignes.empty() && taille > 1){

      for( size_t i = 0; i < taille; ++i){
         for( size_t j = 0; j < taille2; ++j){

               if( i + j == taille - 1){

                  ok = false;

               somme += m.at(i).at(j);

                  return ok;
               }
         }
      }
   }

    return ok;
}

bool sommeDiagGD(const Matrice& m, int& resultat){// <\>

   Vecteur lignes;

   bool ok = false;

   int somme = 0;

   resultat = somme;

   if( !lignes.empty() && m.size() > 1){

      for( size_t i = 0; i < m.size(); ++i){
         for( size_t j = 0; j < lignes.size(); ++j){

            if( j == i){

               ok = true;

               somme += m.at(i).at(j);

               return ok;
            }

         }
      }
   }
   return ok;
}

