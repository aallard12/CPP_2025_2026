/**
 * @file livre.h
 * @brief Déclaration de la classe Livre
 * @version 1.0
 * @author Antoine ALLARD
 * @date 16/10/2025
 */

#ifndef LIVRE_H
#define LIVRE_H

#include "media.h"

class Livre : public Media
{
private:
    int nombreDePage;
public:
    Livre(int _identifiant, string _titre, string _auteur, int _annee, int _nombreDePage);
    void afficher();
};

#endif // LIVRE_H
