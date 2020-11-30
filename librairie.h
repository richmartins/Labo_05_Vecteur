/*-----------------------------------------------------------------------------------
Laboratoire    : LABO 05 Vecteur
Fichier        : librairie.h
Auteur(s)      : Kossi Didier Lokokpe, Martins Tenorio Richard V.
Classe         : PRG1-B
Date creation  : 30.11.20
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------*/

#ifndef LABO_05_VECTEUR_LIBRAIRIE_H
#define LABO_05_VECTEUR_LIBRAIRIE_H
    #include <vector>

    using Vecteur = std::vector<int>;
    using Matrice = std::vector<Vecteur>;

    bool estCarree(Matrice&);

    bool EstReguliere(Matrice&);

    size_t maxCol(Matrice&);

    void vectSommeMin();

    void shuffleMatrice(Matrice m);

    void sortMatrice();

    bool sommeDiagDG();

    bool sommeDiagGD();


#endif //LABO_05_VECTEUR_LIBRAIRIE_H
