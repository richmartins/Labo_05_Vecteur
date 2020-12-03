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
    #include <ostream>

    using Vecteur = std::vector<int>;
    using Matrice = std::vector<Vecteur>;


    std::ostream& operator<<(std::ostream& os, const Vecteur& v);
    std::ostream& operator<<(std::ostream& os, const Matrice& m);

    bool estReguliere(const Matrice&);

    bool estCarree(const Matrice&);

    size_t maxCol(Matrice&);

    Vecteur sommeLigne(const Matrice&);

    Vecteur vectSommeMin(Matrice&);

    void shuffleMatrice(Matrice&);

    void sortMatrice(Matrice&);

    bool sommeDiagDG(const Matrice& m, int somme);

    bool sommeDiagGD(const Matrice& m, int somme);


#endif //LABO_05_VECTEUR_LIBRAIRIE_H
