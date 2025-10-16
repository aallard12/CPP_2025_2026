/**
 * @file compteepargne.h
 * @brief Déclaration de la classe CompteEpargne
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 */

#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include <string>
#include <thread>
#include <chrono>

#include "comptebancaire.h"
#include "compteepargne.h"
#include "menu.h"

using namespace std;

class CompteClient
{
private:
    CompteBancaire *compteBancaire;
    CompteEpargne *compteEpargne;

    string nom;
    int numero;
public:
    CompteClient(string _nom, int _numero);
    ~CompteClient();
    void ouvrirCompteEpargne();
    void gererCompteBancaire();
    void gererCompteEpargne();
};

#endif // COMPTECLIENT_H
