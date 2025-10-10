/**
 * @file compteepargne.cpp
 * @brief Implémentation de la classe CompteEpargne
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 * @details Classe modélisant la gestion d'un compte epargne
 */

#include "compteepargne.h"

/// Constructeur par défaut de la classe CompteEpargne
CompteEpargne::CompteEpargne():
    CompteBancaire(0), tauxInterets(0.03)
{

}

/// Constructeur paramètres de la classe CompteEpargne
CompteEpargne::CompteEpargne(double _solde, double _tauxInterets):
    CompteBancaire(_solde), tauxInterets(_tauxInterets)
{

}

/// Méthoode pour calculer le taux d'intérêts en fonction du solde
void CompteEpargne::calculerInterets()
{
    solde += solde*tauxInterets;
}

/// Méthoode pour modifier le taux d'intérêts
void CompteEpargne::modifierTaux(double nouveauTaux)
{
    tauxInterets = nouveauTaux;
}
