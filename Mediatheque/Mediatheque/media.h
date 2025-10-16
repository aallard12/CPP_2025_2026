/**
 * @file media.h
 * @brief Déclaration de la classe Media
 * @version 1.0
 * @author Antoine ALLARD
 * @date 16/10/2025
 */

#ifndef MEDIA_H
#define MEDIA_H

#include <string>

using namespace std;

class Media
{
protected:
    int identifiant;
    string titre;
    string auteur;
    int annee;
public:
    Media(int _identifiant, string _titre, string _auteur, int _annee);
    virtual ~Media();
    virtual void afficher() = 0;
    int getIdentifiant() const;
    void setIdentifiant(int newIdentifiant);

    string getTitre() const;
    void setTitre(const string &newTitre);
    string getAuteur() const;
    void setAuteur(const string &newAuteur);
    int getAnnee() const;
    void setAnnee(int newAnnee);
};

#endif // MEDIA_H
