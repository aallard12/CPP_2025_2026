/**
 * @file compteepargne.h
 * @brief Déclaration de la classe CompteEpargne
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 */

#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
protected:
    /// Le taux d'intérêts, un nombre réel
    double tauxInterets;
public:
    CompteEpargne(double _solde = 0.0, double _tauxInterets = 0.03);
    double calculerInterets();
    void modifierTaux(double nouveauTaux);
    void crediterInterets();
};

#endif // COMPTEEPARGNE_H
