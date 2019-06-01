#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED

class Vehicule
{
    public:
    void affiche() const;  //Affiche une description du Vehicule

    protected:
    int m_prix;  //Chaque véhicule a un prix
};



#endif // VEHICULE_H_INCLUDED
