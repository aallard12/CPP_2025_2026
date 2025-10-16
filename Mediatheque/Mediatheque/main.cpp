#include <iostream>
#include "media.h"
#include "livre.h"
#include "dvd.h"

using namespace std;

int main()
{
    Livre monLivre(1000, "Le Petit Prince", "Antoine de Saint-Exupery", 1943, 96);
    DVD monDVD(2000, "Le Parrain", "Francis Ford Coppola", 1972, 175);
    monLivre.afficher();
    monDVD.afficher();
    return 0;
}
