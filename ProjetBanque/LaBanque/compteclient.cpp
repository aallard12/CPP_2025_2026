/**
 * @file compteclient.cpp
 * @brief Implémentation de la classe CompteClient
 * @version 1.0
 * @author Antoine ALLARD
 * @date 10/10/2025
 * @details Classe modélisant la gestion d'un compte client
 */
#include "compteclient.h"
#include <iostream>

/**
 * @brief CompteClient::CompteClient
 * @param _nom
 * @param _numero
 */
CompteClient::CompteClient(string _nom, int _numero):
    nom(_nom), numero(_numero), compteEpargne(nullptr)
{
    compteBancaire = new CompteBancaire(0.0);
}

/**
 * @brief CompteClient::~CompteClient
 */
CompteClient::~CompteClient()
{
    delete []compteBancaire;
    if (compteEpargne != nullptr){
        delete []compteEpargne;
    }
}

/**
 * @brief CompteClient::ouvrirCompteEpargne
 */
void CompteClient::ouvrirCompteEpargne()
{
    if (compteEpargne == nullptr){
        double solde;
        double tauxInt;

        cout << "Quel est le solde de départ : ";
        cin >> solde;

        cout << "Quel est le taux d'intérêts : ";
        cin >> tauxInt;

        compteEpargne = new CompteEpargne(solde,tauxInt);
    } else {
        cout << "L'ouverture d'un second compte n'est pas autorisée ! " << endl;
    }
}

/**
 * @brief CompteClient::gererCompteBancaire
 */

void CompteClient::gererCompteBancaire()
{
    Menu monMenu("compteBancaire.txt");
    int choix;
    do  {
        choix = monMenu.Afficher();
        switch (choix) {
        case 1:
            cout << "Le solde sur votre compte est de " << compteBancaire->consulterSolde() << "€" << endl;
            this_thread::sleep_for(chrono::seconds(3));
            break;
        case 2:
            double depot;
            cout << "Combien voulez-vous déposer ? (somme négative interdite) : " << endl;
            cin >> depot;
            compteBancaire->deposer(depot);
            cout << "Le solde sur votre compte est de " << compteBancaire->consulterSolde() << "€" << endl;
            this_thread::sleep_for(chrono::seconds(3));
            break;
        case 3:
            double retrait;
            cout << "Combien voulez-vous retirer ? (retrait positif ainsi qu'inférieur à votre solde) : " << endl;
            cin >> retrait;
            compteBancaire->retirer(retrait);
            cout << "Le solde sur votre compte est de " << compteBancaire->consulterSolde() << "€" << endl;
            this_thread::sleep_for(chrono::seconds(3));
            break;
        case 4:
            break;
        default:
            cout << "Votre valeur est inconnue, redonnez votre choix..." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }

    } while (choix!=4);
    cout << endl << endl << "Vous avez quitté la gestion du compte bancaire" << endl << endl;
}

/**
 * @brief CompteClient::gererCompteEpargne
 */
void CompteClient::gererCompteEpargne()
{
    Menu monMenu("compteEpargne.txt");
    int choix;

    if (compteEpargne != nullptr){
        do  {
            choix = monMenu.Afficher();
            switch (choix) {
            case 1:
                cout << "Le solde sur votre compte est de " << compteEpargne->consulterSolde() << "€" << endl << endl;
                this_thread::sleep_for(chrono::seconds(3));
                break;

            case 2:
                double depot;
                cout << "Combien voulez-vous déposer ? (somme négative interdite) : ";
                cin >> depot;
                compteEpargne->deposer(depot);
                cout << "Le solde sur votre compte est de " << compteEpargne->consulterSolde() << "€" << endl << endl;
                this_thread::sleep_for(chrono::seconds(3));
                break;

            case 3:
                double retrait;
                cout << "Combien voulez-vous retirer ? (retrait positif ainsi qu'inférieur à votre solde) : ";
                cin >> retrait;
                if (!compteEpargne->retirer(retrait)){
                    cout << "Montant à retirer impossible" << endl;
                }
                cout << "Le solde sur votre compte est de " << compteEpargne->consulterSolde() << "€" << endl << endl;
                this_thread::sleep_for(chrono::seconds(3));
                break;

            case 4:
                cout << "Les intérêts sont de : " << compteEpargne->calculerInterets() << "€" << endl << endl;
                this_thread::sleep_for(chrono::seconds(3));
                break;

            case 5:
                compteEpargne->crediterInterets();
                cout << "Le solde sur votre compte est de " << compteEpargne->consulterSolde() << "€" << endl << endl;
                this_thread::sleep_for(chrono::seconds(3));
                break;

            case 6:
                break;

            default:
                cout << "Votre valeur est inconnue, redonnez votre choix..." << endl << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }

        } while (choix!=6);
        cout << endl << endl << "Vous avez quitté la gestion du compte epargne" << endl << endl;
    } else {
        cout << "Vous n'avez pas de compte epargne !" << endl;
    }
}
