/**
 * @file catalogue.cpp
 * @brief Implémentation de la classe Catalogue
 * @version 1.0
 * @author Antoine ALLARD
 * @date 16/10/2025
 * @details Classe modélisant l'initialisation de la classe Catalogue
 */

#include "catalogue.h"

/**
 * @brief Catalogue::Catalogue
 * @param _nbMedia
 */
Catalogue::Catalogue(int _nbMedia):
    nbMedia(_nbMedia), index(0)
{
    lesMedias = new Media*[nbMedia];
}

/**
 * @brief Catalogue::~Catalogue
 */
Catalogue::~Catalogue()
{
    delete []lesMedias;
}

/**
 * @brief Catalogue::ajouterMedia
 * @param ptrMedia
 * @return
 */
bool Catalogue::ajouterMedia(Media *ptrMedia)
{
    bool retour = false;
    if (index != nbMedia){
        lesMedias[index] = ptrMedia;
        index++;
        return true;
    }

    return retour;
}

/**
 * @brief Catalogue::consulter
 * @param _typeAffichage
 */
void Catalogue::consulter(const int _typeAffichage)
{
    switch (_typeAffichage) {
    case TOUS:
        for (int i = 0; i< index; i++){
            lesMedias[i]->afficher();
        }
        break;

    case VIDEO:
        for (int i = 0; i < index; ++i) {

            if (dynamic_cast<DVD*>(lesMedias[i])!=nullptr){
                lesMedias[i]->afficher();
            }
        }

    case LIVRE:
        for (int i = 0; i < index; ++i) {
            if (dynamic_cast<Livre*>(lesMedias[i])!=nullptr)
            {
                lesMedias[i]->afficher();
            }
        }
    default:
        break;
    }

}
