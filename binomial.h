#ifndef BINOMIAL_H
#define BINOMIAL_H

class Binomial{
    private: 
    float coefficientOne, coefficientTwo;
    int powerOne, powerTwo;
        

    public: 
    Binomial();
    Binomial(float coeffOne, int powOne, float coeffTwo, int powTwo);
    Binomial(float coeffOne, int powOne, float coeffTwo);
    Binomial(float coeffOne, int powOne);
    Binomial(float coeffOne);

     float GetCoefficient(int index) const;

     int GetPower(int index) const;

    int SetPower(int index, int power) ;

    int Add(const Binomial b);

    void Multiply(float val);

    void Multiply(float coeff, int pow);
};
#endif