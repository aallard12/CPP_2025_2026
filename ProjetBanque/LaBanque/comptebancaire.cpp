/**
 * @file comptebancaire.cpp
 * @brief Implémentation de la classe CompteBancaire
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 * @details Classe modélisant la gestion d'un compte bancaire
 */

#include "comptebancaire.h"

/** Constructeur avec paramètre de la classe Compte Bancaire */
CompteBancaire::CompteBancaire(const float _solde):
    solde(_solde)
{

}

/** Méthode pour déposer de l'argent sur le compte bancaire */
void CompteBancaire::deposer(const float montant)
{
    if (montant>0) {
        solde += montant;
    }
}

/** Méthode pour retirer de l'argent du compte bancaire */
bool CompteBancaire::retirer(const float montant)
{
    bool retour = false;
    if (solde >= montant){
        solde -= montant;
        retour = true;
    }
    return retour;
}

/** Méthode pour consulter le solde du compte bancaire */
float CompteBancaire::consulterSolde()
{
    return solde;
}
