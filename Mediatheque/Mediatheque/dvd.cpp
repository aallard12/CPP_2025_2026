/**
 * @file dvd.cpp
 * @brief Implémentation de la classe DVD
 * @version 1.0
 * @author Antoine ALLARD
 * @date 16/10/2025
 * @details Classe modélisant l'initialisation de la classe DVD
 */

#include "dvd.h"
#include <iostream>
#include <iomanip>

/**
 * @brief DVD::DVD
 * @param _identifiant
 * @param _titre
 * @param _auteur
 * @param _annee
 * @param _duree
 */
DVD::DVD(int _identifiant, string _titre, string _auteur, int _annee, int _duree):
    Media(_identifiant, _titre, _auteur, _annee), duree(_duree)
{

}

/**
 * @brief DVD::afficher
 */
void DVD::afficher()
{
    cout << left << "|" << setw(7) << identifiant
         << "|" << setw(37) << titre
         << "|" << setw(26) << auteur
         << "|" << setw(8) << annee
         << "|" << duree << " minutes" << setw(10) << " " << "|" << endl;
}

/**
 * @brief DVD::getDuree
 * @return
 */
int DVD::getDuree() const
{
    return duree;
}

/**
 * @brief DVD::setDuree
 * @param newDuree
 */
void DVD::setDuree(int newDuree)
{
    duree = newDuree;
}
