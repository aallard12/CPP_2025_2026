/**
 * @file comptebancaire.cpp
 * @brief Implémentation de la classe CompteBancaire
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 * @details Classe modélisant la gestion d'un compte bancaire
 */

#include <iostream>
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
 * @param _montant
 */
void CompteBancaire::deposer(const float _depot)
{
    if (_depot>0) {
        solde += _depot;
    }
}

/**
 * @brief CompteBancaire::retirer
 * @param _montant
 * @return
 */
bool CompteBancaire::retirer(const float _retrait)
{
    bool retour = false;
    if (solde >= _retrait && _retrait >= 0){
        solde -= _retrait;
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
