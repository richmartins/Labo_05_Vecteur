/*-----------------------------------------------------------------------------------
Laboratoire    : LABO 05 Vecteur
Fichier        : main.cpp
Auteur(s)      : Kossi Didier Lokokpe, Martins Tenorio Richard V.
Classe         : PRG1-B
Date creation  : 30.11.20
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>

#include "librairie.h"

using namespace std;

int main() {

    cout << "\ntest estCarree" << endl;
    Matrice m1 = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };

    Matrice m2 = {
            {1,2,3},
            {4,5,6},
    };

    cout << "m1 : " << m1 << endl;
    cout << "m2 : " << m2 << endl;

    cout << "m1 est carré ? -> " << boolalpha << estCarree(m1) << endl;
    cout << "m2 est carré ? -> " << boolalpha << estCarree(m2) << endl;



    cout << "\ntest estReguliere" << endl;
    Matrice m4 = {
            {1,2,3},
            {4,5},
            {7,8,9}
    };

    Matrice m5 = {
            {1,2,3},
            {4,5,6},
    };

    cout << "m4 : " << m4 << endl;
    cout << "m5 : " << m5 << endl;

    cout << "m4 est reguliere ? -> " << boolalpha << estReguliere(m4) << endl;
    cout << "m5 est reguliere ? -> " << boolalpha << estReguliere(m5) << endl;


    cout << "\ntest maxCol" << endl;
    Matrice m6 = {
            {1,2,3},
            {4,5},
            {7,8,9},
            {10,11,12,13}
    };

    Matrice m7 = {
            {1,2},
            {4,5,6},
    };

    cout << "m6 : " << m6 << endl;
    cout << "m7 : " << m7 << endl;

    cout << "m6 max col ? -> " << maxCol(m6) << endl;
    cout << "m7 max col ? -> " << maxCol(m7) << endl;


    cout << "\ntest sommeLigne" << endl;
    Matrice m8 = {
            {1,2,3},
            {4,5},
            {7,8,9},
            {10,11,12,13}
    };

    Matrice m9 = {
            {1,2},
            {4,5,6},
    };

    cout << "m8 : " << m8 << endl;
    cout << "m9 : " << m9 << endl;

    cout << "m8 somme des lignes -> " << sommeLigne(m8) << endl;
    cout << "m9 somme des lignes -> " << sommeLigne(m9) << endl;


    cout << "\nvectSommeMin" << endl;
    Matrice m10 = {
            {1,2,3},
            {4,5},
            {7,8,9},
    };

    Matrice m11 = {
            {4,5,6},
            {2, 2}
    };

    cout << "m10 : " << m10 << endl;
    cout << "m11 : " << m11 << endl;

    cout << "m10 vecteur avec somme min -> " << vectSommeMin(m10) << endl;
    cout << "m11 vecteur avec somme min -> " << vectSommeMin(m11) << endl;

    cout << "\nshuffleMatrice" << endl;
    Matrice m12 = {
            {1,2,3},
            {7,8,9},
            {4,5},
    };

    Matrice m13 = {
            {4,5,6},
            {2, 2},
            {7,8,9}
    };

    cout << "m12 " << m12;
    shuffleMatrice(m12);
    cout << " -> " << m12 << endl;

    cout << "m13 " << m13;
    shuffleMatrice(m13);
    cout << " -> " << m13 << endl;

    cout << "\nsortMatrice" << endl;
    Matrice m14 = {
            {1,2,3},
            {7,8,9},
            {4,5},
    };

    Matrice m15 = {
            {4,5,6},
            {2, 2},
            {7,8,9}
    };

    cout << "m14 " << m14;
    sortMatrice(m14);
    cout << " -> " << m14 << endl;

    cout << "m15 " << m15;
    sortMatrice(m15);
    cout << " -> " << m15 << endl;
//
//    bool sommeDiagDG();
//
//    bool sommeDiagGD();

    return EXIT_SUCCESS;
}
