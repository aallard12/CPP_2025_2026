/**
 * @file compteepargne.cpp
 * @brief Implémentation de la classe CompteEpargne
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 * @details Classe modélisant la gestion d'un compte epargne
 */

#include "compteepargne.h"

/**
 * @brief CompteEpargne::CompteEpargne
 */
CompteEpargne::CompteEpargne():
    CompteBancaire(0), tauxInterets(0.03)
{

}

/**
 * @brief CompteEpargne::CompteEpargne
 * @param _solde
 * @param _tauxInterets
 */
CompteEpargne::CompteEpargne(double _solde, double _tauxInterets):
    CompteBancaire(_solde), tauxInterets(_tauxInterets)
{

}

/**
 * @brief CompteEpargne::calculerInterets
 */
void CompteEpargne::calculerInterets()
{
    solde += solde*tauxInterets;
}

/**
 * @brief CompteEpargne::modifierTaux
 * @param nouveauTaux
 */
void CompteEpargne::modifierTaux(double nouveauTaux)
{
    tauxInterets = nouveauTaux;
}
