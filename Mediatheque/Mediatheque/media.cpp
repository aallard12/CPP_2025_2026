/**
 * @file media.cpp
 * @brief Implémentation de la classe Media
 * @version 1.0
 * @author Antoine ALLARD
 * @date 16/10/2025
 * @details Classe modélisant l'initialisation de la classe Media
 */

#include "media.h"

/**
 * @brief Media::Media
 * @param _identifiant
 * @param _titre
 * @param _auteur
 * @param _annee
 */
Media::Media(int _identifiant, string _titre, string _auteur, int _annee):
    identifiant(_identifiant), titre(_titre), auteur(_auteur), annee(_annee)
{

}

/**
 * @brief Media::~Media
 */
Media::~Media()
{

}

/**
 * @brief Media::getIdentifiant
 * @return
 */
int Media::getIdentifiant() const
{
    return identifiant;
}

/**
 * @brief Media::setIdentifiant
 * @param newIdentifiant
 */
void Media::setIdentifiant(int newIdentifiant)
{
    identifiant = newIdentifiant;
}

/**
 * @brief Media::getTitre
 * @return
 */
string Media::getTitre() const
{
    return titre;
}

/**
 * @brief Media::setTitre
 * @param newTitre
 */
void Media::setTitre(const string &newTitre)
{
    titre = newTitre;
}

/**
 * @brief Media::getAuteur
 * @return
 */
string Media::getAuteur() const
{
    return auteur;
}

/**
 * @brief Media::setAuteur
 * @param newAuteur
 */
void Media::setAuteur(const string &newAuteur)
{
    auteur = newAuteur;
}

/**
 * @brief Media::getAnnee
 * @return
 */
int Media::getAnnee() const
{
    return annee;
}
