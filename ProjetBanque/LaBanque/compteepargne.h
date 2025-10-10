#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
protected:
    double tauxInterets;
public:
    CompteEpargne();
    void calculerInterets();
    double modifierTaux();
};

#endif // COMPTEEPARGNE_H
