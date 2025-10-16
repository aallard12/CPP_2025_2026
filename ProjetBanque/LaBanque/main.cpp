#include <iostream>
#include <thread>
#include <chrono>

#include "comptebancaire.h"
#include "compteepargne.h"
#include "compteclient.h"
#include "menu.h"

using namespace std;
#if 0
int main()
{
    Menu monMenu("compteBancaire.txt");

    CompteBancaire monCompte(500);
    // monCompte.retirer(200);
    // cout << monCompte.consulterSolde() << endl;
    // monCompte.deposer(500);
    // cout << monCompte.consulterSolde() << endl;
    int choix;

    do  {
        choix = monMenu.Afficher();
        switch (choix) {
        case 1:
            cout << "Le solde sur votre compte est de " << monCompte.consulterSolde() << "€" << endl;
            break;
        case 2:
            double depot;
            cout << "Combien voulez-vous déposer ? (somme négative interdite) : " << endl;
            cin >> depot;
            monCompte.deposer(depot);
            cout << "Le solde sur votre compte est de " << monCompte.consulterSolde() << "€" << endl;
            break;
        case 3:
            double retrait;
            cout << "Combien voulez-vous retirer ? (retrait positif ainsi qu'inférieur à votre solde) : " << endl;
            cin >> retrait;
            monCompte.retirer(retrait);
            cout << "Le solde sur votre compte est de " << monCompte.consulterSolde() << "€" << endl;
            break;
        case 4:
            break;
        default:
            cout << "Votre valeur est inconnue, redonnez votre choix..." << endl;
            break;
        }

    } while (choix!=4);

    cout << "Vous avez quitté le menu ! " << endl;

    return 0;
}
#endif

#if 0
int main() {

    Menu monMenu("compteEpargne.txt");
    CompteEpargne monEpargne;
    int choix;

    do  {
        choix = monMenu.Afficher();
        switch (choix) {
        case 1:
            cout << "Le solde sur votre compte est de " << monEpargne.consulterSolde() << "€" << endl << endl;
            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 2:
            double depot;
            cout << "Combien voulez-vous déposer ? (somme négative interdite) : ";
            cin >> depot;
            monEpargne.deposer(depot);
            cout << "Le solde sur votre compte est de " << monEpargne.consulterSolde() << "€" << endl << endl;
            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 3:
            double retrait;
            cout << "Combien voulez-vous retirer ? (retrait positif ainsi qu'inférieur à votre solde) : ";
            cin >> retrait;
            if (!monEpargne.retirer(retrait)){
                cout << "Montant à retirer impossible" << endl;
            }
            cout << "Le solde sur votre compte est de " << monEpargne.consulterSolde() << "€" << endl << endl;
            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 4:
            monEpargne.calculerInterets();
            cout << "Le solde sur votre compte est de " << monEpargne.consulterSolde() << "€" << endl << endl;
            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 5:
            monEpargne.crediterInterets();
            break;

        default:
            cout << "Votre valeur est inconnue, redonnez votre choix..." << endl << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }

    } while (choix!=5);
    cout << "Vous avez quitté le menu !!" << endl;
    return 0;
}
#endif

int main() {

    Menu monMenu("client.txt");
    CompteClient compteClient("Albert",1);
    int choix;

    do  {
        choix = monMenu.Afficher();
        switch (choix) {
        case 1:
            compteClient.ouvrirCompteEpargne();
            cout << "Votre compte epargne est ouvert" << endl;
            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 2:
            compteClient.gererCompteBancaire();
            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 3:
            compteClient.gererCompteEpargne();
            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 4:
            break;

        default:
            cout << "Votre valeur est inconnue, redonnez votre choix..." << endl << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }

    } while (choix!=4);
    cout << "Vous avez quitté le menu client !!" << endl;
    return 0;
}
