#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED
class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
    void affiche() const;

    private:
    double m_vitesse;  //La vitesse maximale de la moto
};



#endif // MOTO_H_INCLUDED
