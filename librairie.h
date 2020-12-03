/*-----------------------------------------------------------------------------------
Laboratoire    : LABO 05 Vecteur
Fichier        : librairie.h
Auteur(s)      : Kossi Didier Lokokpe, Martins Tenorio Richard V.
Classe         : PRG1-B
Date creation  : 30.11.20
Description    : en-tête contenant les prototypes des fonctions
                 défini dans librairie.cpp
Compilateur    : Mingw-w64 g++ 8.1.0 & gcc version 10.2.0 (Homebrew GCC 10.2.0)
-----------------------------------------------------------------------------------*/

#ifndef LABO_05_VECTEUR_LIBRAIRIE_H
#define LABO_05_VECTEUR_LIBRAIRIE_H

#include <vector>
#include <ostream>

using Vecteur = std::vector<int>;
using Matrice = std::vector<Vecteur>;


/**
 * @section description
 *
 * surcharge de l'opérateur "<<" afin de pouvoir envoyer des Vecteur dans le buffer
 *
 * @param std::ostream& buffer
 * @param const Vecteur&
 * @return
 */
std::ostream &operator<<(std::ostream &, const Vecteur &);

/**
 * @section description
 *
 * surcharge de l'opérateur "<<" afin de pouvoir envoyer des Matrice dans le buffer
 *
 * @param std::ostream& buffer
 * @param const Vecteur&
 * @return
 */
std::ostream &operator<<(std::ostream &, const Matrice &);

/*
 * @section description
 *
 * vérif. si les vecteurs d'une matrice sont de même taille
 *
 * @param Matrice de Vecteur d'entier
 * @return bool
 */
bool estReguliere(const Matrice &);

/**
 * @section description
 *
 * vérif. si matrice est carrée
 *
 * @param Matrice de vecteur d'entier
 * @return bool
 */
bool estCarree(const Matrice &);

/**
 * @section description
 *
 * retourne la taille du plus grand vecteur de la matrice
 *
 * @param Matrice de vecteur d'entier
 * @return size_t
 */
size_t maxCol(Matrice &);

/**
 * @section description
 *
 * retourne un vecteur avec la somme des éléments de chaques vecteur de la matrice
 *
 * @param Matrice de vecteur d'entier
 * @return Vecteur
 */
Vecteur sommeLigne(const Matrice &);

/**
 * @section description
 *
 * retourne le vecteur de la matrice où la somme de ses éléments est la plus petits
 *
 * @param Matrice de vecteur d'entier
 * @return Vecteur
 */
Vecteur vectSommeMin(Matrice &);

/**
 * @section description
 *
 * Mélange l'ordre des vecteurs de la matrice
 *
 * @param Matrice de vecteur d'entier
 */
void shuffleMatrice(Matrice &);

/**
 * @section description
 *
 * Trie les éléments des vecteurs de la matrice dans l'ordre déscroissant
 *
 * @param Matrice de vecteur d'entier
 */
void sortMatrice(Matrice &);

/**
 * @section description
 *
 * calcule la somme des éléments en diagonale / (droite à gauche)
 *
 * @param const& Matrice de vecteur d'entier
 * @param int& resultat de la somme de la diagonale
 * @return bool
 */
bool sommeDiagDG(const Matrice &, int &);

/**
 * @section description
 *
 * calcule la somme des éléments en diagonale \ (gauche à droite)
 *
 * @param const& Matrice de vecteur d'entier
 * @param int& resultat de la somme de la diagonale
 * @return bool
 */
bool sommeDiagGD(const Matrice &, int &);


#endif //LABO_05_VECTEUR_LIBRAIRIE_H
