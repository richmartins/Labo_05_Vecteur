/*-----------------------------------------------------------------------------------
Laboratoire    : LABO 05 Vecteur
Fichier        : librairie.cpp
Auteur(s)      : Kossi Didier Lokokpe, Martins Tenorio Richard V.
Classe         : PRG1-B
Date creation  : 30.11.20
Description    : Définition des fonctions & surcharge des opérateurs =>
                 - "<<" pour des Vecteurs
                 - "<<" pour des Matrices
                 - estCarre
                 - estReguliere
                 - maxCol
                 - sommeLigne
                 - vectSommeMin
                 - shuffleMatrice
                 - sortMatrice
                 - sommeDiagGD
                 - SommeDiagDG
                 Les descriptions de ces fonctions se trouvent dans libraire.h
Remarque(s)    : Warning pour la définition des opérateurs due à l'énoncé qui avait
                 comme contrainte de ne pas utiliser des types "auto" dans la
                 déclaration des itérateurs
Compilateur    : Mingw-w64 g++ 8.1.0 & gcc version 10.2.0 (Homebrew GCC 10.2.0)
-----------------------------------------------------------------------------------*/

#include "librairie.h"

#include <vector>
#include <algorithm>
#include <numeric>
#include <chrono>
#include <random>

/**
 * @section description
 *
 * fait la somme des éléments des éléments du vecteur v
 *
 * @param Vecteur v
 * @return int somme
 */
int sommeVect(const Vecteur &v) {
    return std::accumulate(v.begin(), v.end(), 0);
}

/**
 * @section description
 *
 * retourne la taille du vecteur v
 *
 * @param Vecteur v
 * @return size_t taille du vecteur
 */
size_t taille(Vecteur &v) {
    return v.size();
}

std::ostream &operator<<(std::ostream &os, const Vecteur &v) {
    os << "(";
    for (Vecteur::const_iterator i = v.begin(); i != v.end(); ++i) {
        if (i != v.begin()) {
            os << ", ";
        }
        os << *i;
    }
    os << ")";

    return os;
}

std::ostream &operator<<(std::ostream &os, const Matrice &m) {
    os << "[";
    for (Matrice::const_iterator i = m.begin(); i != m.end(); ++i) {
        if (i != m.begin())
            os << ", ";
        os << *i;
    }
    os << "]";

    return os;
}


bool estReguliere(const Matrice &m) {
    size_t PREMIERE_LIGNE = m[0].size();

    if (not(m.empty())) {
        for (const auto &i : m) {
            if (PREMIERE_LIGNE != i.size()) {
                return false;
            }
        }
    }

    return true;
}


bool estCarree(const Matrice &m) {
    return m.empty() || (estReguliere(m) && m[0].size() == m.size());
}


size_t maxCol(Matrice &m) {
    Vecteur tailles(m.size());

    std::transform(m.begin(), m.end(), tailles.begin(), taille);

    return static_cast<size_t>(*std::max_element(tailles.begin(), tailles.end()));
}

Vecteur sommeLigne(const Matrice &m) {
    Vecteur totSum(m.size());

    std::transform(m.begin(), m.end(), totSum.begin(), sommeVect);

    return totSum;
}

Vecteur vectSommeMin(Matrice &m) {
    // trouver l'index ou la sommes du vecteur et le minimum
    Vecteur v = sommeLigne(m);
    size_t index = static_cast<size_t>(std::min_element(v.begin(), v.end()) - v.begin());

    // retourner le vecteur de m à index trouver
    return m[index];
}


// source: http://www.cplusplus.com/reference/algorithm/shuffle/
void shuffleMatrice(Matrice &m) {
    unsigned generateur = static_cast<unsigned>(std::chrono::system_clock::now().time_since_epoch().count());
    shuffle(m.begin(), m.end(), std::default_random_engine(generateur));
}

void sortMatrice(Matrice &m) {
    for (Vecteur &i : m) {
        std::sort(i.begin(), i.end(), std::greater<>());
    }
}

bool sommeDiagDG(const Matrice &m, int &somme) {
    if (estCarree(m)) {
        for (size_t i = 0; i < m.size(); ++i) {
            somme += m[i][m.size() - i - 1];
        }
        return true;
    }

    return false;
}


bool sommeDiagGD(const Matrice &m, int &somme) {
    if (estCarree(m)) {
        for (size_t i = 0; i < m.size(); ++i) {
            somme += m[i][i];
        }

        return true;
    }

    return false;
}
