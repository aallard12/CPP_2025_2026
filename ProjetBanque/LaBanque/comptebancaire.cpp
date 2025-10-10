/**
 * @file comptebancaire.cpp
 * @brief Implémentation de la classe CompteBancaire
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 * @details Classe modélisant la gestion d'un compte bancaire
 */

#include "comptebancaire.h"

/**
 * @brief CompteBancaire::CompteBancaire
 * @param _solde
 */
CompteBancaire::CompteBancaire(const float _solde):
    solde(_solde)
{

}

/**
 * @brief CompteBancaire::deposer
 * @param montant
 */
void CompteBancaire::deposer(const float montant)
{
    if (montant>0) {
        solde += montant;
    }
}

/**
 * @brief CompteBancaire::retirer
 * @param montant
 * @return
 */
bool CompteBancaire::retirer(const float montant)
{
    bool retour = false;
    if (solde >= montant){
        solde -= montant;
        retour = true;
    }
    return retour;
}

/**
 * @brief CompteBancaire::consulterSolde
 * @return
 */
float CompteBancaire::consulterSolde()
{
    return solde;
}
