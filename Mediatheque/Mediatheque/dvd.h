/**
 * @file dvd.h
 * @brief Déclaration de la classe DVD
 * @version 1.0
 * @author Antoine ALLARD
 * @date 16/10/2025
 */

#ifndef DVD_H
#define DVD_H

#include "media.h"

class DVD : public Media
{
private:
    int duree;
public:
    DVD(int _identifiant, string _titre, string _auteur, int _annee, int _duree);

    void afficher();

    int getDuree() const;
    void setDuree(int newDuree);
};

#endif // DVD_H
