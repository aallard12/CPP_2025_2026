/**
 * @file comptebancaire.h
 * @brief Déclaration de la classe CompteBancaire
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 */

#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

using namespace std;

class CompteBancaire
{
protected:
    /** Le solde du compte bancaire, un nombre réel */
    float solde;
public:
    CompteBancaire(float _solde = 0.0);
    void deposer(const float _depot);
    bool retirer(const float _retrait);
    float consulterSolde();
};

#endif // COMPTEBANCAIRE_H
