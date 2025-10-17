#ifndef CATALOGUE_H
/**
 * @file catalogue.h
 * @brief Déclaration de la classe Catalogue
 * @version 1.0
 * @author Antoine ALLARD
 * @date 16/10/2025
 */

#define CATALOGUE_H

#include "media.h"
#include "dvd.h"
#include "livre.h"


enum TYPE_MEDIA{
    TOUS = 1,
    VIDEO,
    LIVRE
};


class Catalogue
{
private:
    Media **lesMedias;
    int nbMedia;
    int index;
public:
    Catalogue(int _nbMedia);
    ~Catalogue();
    bool ajouterMedia(Media *ptrMedia);
    void consulter(const int _typeAffichage);
};

#endif // CATALOGUE_H
