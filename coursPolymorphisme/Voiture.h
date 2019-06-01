#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED

class Voiture : public Vehicule //Une Voiture EST UN Vehicule
{
    public:
    void affiche() const;

    private:
    int m_portes;  //Le nombre de portes de la voiture
};



#endif // VOITURE_H_INCLUDED
