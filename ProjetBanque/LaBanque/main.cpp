#include <iostream>
#include "comptebancaire.h"
#include "compteepargne.h"
#include "menu.h"

using namespace std;

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
