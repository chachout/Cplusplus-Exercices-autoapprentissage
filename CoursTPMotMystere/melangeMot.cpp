#include "melangeMot.h"
#include <string>
#include <ctime>
#include <cstdlib>

std::string melangeMot (std::string motDepart)
{
    int nbAleatoire(0);
    srand(time(0));
    int tailleMot(motDepart.size());
    std::string motMelange;
    motMelange=motDepart;
    int i(0);
    while (motDepart.size()!=0)
    {
        nbAleatoire =rand()%tailleMot;
        motMelange[i]=motDepart[nbAleatoire];
        motDepart.erase(nbAleatoire,1);
        tailleMot=motDepart.size();
        i++;
    }
    return motMelange;
}
