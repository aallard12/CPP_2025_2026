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
    CompteEpargne();
    CompteEpargne(double _solde, double _tauxInterets);
    void calculerInterets();
    void modifierTaux(double nouveauTaux);
};

#endif // COMPTEEPARGNE_H
