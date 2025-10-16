/**
 * @file livre.cpp
 * @brief Implémentation de la classe Livre
 * @version 1.0
 * @author Antoine ALLARD
 * @date 16/10/2025
 * @details Classe modélisant l'initialisation de la classe Livre
 */

#include "livre.h"
#include <iostream>
#include <iomanip>

/**
 * @brief Livre::Livre
 * @param _identifiant
 * @param _titre
 * @param _auteur
 * @param _annee
 * @param _nombreDePage
 */
Livre::Livre(int _identifiant, string _titre, string _auteur, int _annee, int _nombreDePage):
    Media(_identifiant, _titre, _auteur, _annee), nombreDePage(_nombreDePage)
{

}

/**
 * @brief Livre::afficher
 */
void Livre::afficher()
{
    cout << left << "|" << setw(7) << identifiant
         << "|" << setw(37) << titre
         << "|" << setw(26) << auteur
         << "|" << setw(8) << annee
         << "|" << nombreDePage << " pages" << setw(13) << ' ' << "|" << endl;
}
