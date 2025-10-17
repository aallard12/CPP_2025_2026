#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include "media.h"
#include "livre.h"
#include "dvd.h"
#include "catalogue.h"
#include "menu.h"

using namespace std;

int main()
{
#if 0
    Livre monLivre(1000, "Le Petit Prince", "Antoine de Saint-Exupery", 1943, 96);
    DVD monDVD(2000, "Le Parrain", "Francis Ford Coppola", 1972, 175);
    Catalogue teleLoisirs(10);

    monLivre.afficher();
    monDVD.afficher();

    teleLoisirs.ajouterMedia(&monLivre);
    teleLoisirs.ajouterMedia(&monDVD);

    teleLoisirs.consulter(TOUS);
    teleLoisirs.consulter(VIDEO);
    teleLoisirs.consulter(LIVRE);
#endif

    Menu monMenu("menu.txt");
    Catalogue teleLoisirs(10);
    int choix;
    int identifiantMedia = 1;

    string titre;
    string auteur;
    int annee;
    int duree;
    int nbPages;

    do  {
        choix = monMenu.afficherEtChoisir();
        switch (choix) {
        case 1:{

            cout << "Quel est le titre du DVD : ";
            cin.ignore();
            getline(cin, titre);

            cout << "Quel est l'auteur du DVD : ";
            cin.ignore();
            getline(cin, auteur);

            cout << "Quelle est l'année du DVD : ";
            cin >> annee;

            cout << "Quel est la duree du DVD (en minutes) : ";
            cin >> duree;

            DVD monDVD(identifiantMedia, titre, auteur, annee, duree);
            teleLoisirs.ajouterMedia(&monDVD);

            identifiantMedia++;
}
            break;

        case 2:{

            cout << "Quel est le titre du Livre : ";
            cin.ignore();
            getline(cin, titre);

            cout << "Quel est l'auteur du Livre : ";
            cin.ignore();
            getline(cin, auteur);

            cout << "Quelle est l'année du Livre : ";
            cin >> annee;

            cout << "Combien de pages possèdent le Livre : ";
            cin >> nbPages;

            Livre monLivre(identifiantMedia, titre, auteur, annee, nbPages);
            teleLoisirs.ajouterMedia(&monLivre);

            identifiantMedia++;
}
            break;

        case 3:
            teleLoisirs.consulter(1);

            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 4:
            teleLoisirs.consulter(2);

            this_thread::sleep_for(chrono::seconds(3));
            break;

        case 5:
            teleLoisirs.consulter(3);

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
    cout << "Vous avez quitté le menu !!" << endl;

    return 0;
}
