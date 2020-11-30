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

bool estCarree(Matrice& m){
    size_t nbrLigne = 0;
    size_t premiereLigne = m[0].size();

    for(const Vecteur& ligne : m){
        if(ligne.size() != premiereLigne){
            return false;
        } else {
            ++nbrLigne;
        }
    }

    if(nbrLigne == premiereLigne){
        return true;
    }
    return false;
}

bool EstReguliere(Matrice& m){

    size_t premiereLigne = m[0].size();

    if(std::all_of(m.begin(), m.end(), [premiereLigne](const Vecteur& ligne) {return ligne.size() != premiereLigne; })){
        return false;
    }
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

void vectSommeMin(){}

void shuffleMatrice(Matrice m){

}

void sortMatrice(){}

bool sommeDiagDG(){

    return true;
}

bool sommeDiagGD(){

    return true;
}
