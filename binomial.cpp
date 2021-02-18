#include "binomial.h"

    Binomial::Binomial() {
        coefficientOne = 1;
        coefficientTwo = 1;
        powerOne = 1;
        powerTwo = 1;
    }

    Binomial::Binomial(float coeffOne, int powOne, float coeffTwo, int powTwo) {
        coefficientOne = coeffOne;
        coefficientTwo = coeffTwo;
        if (powOne < 1 ) {
            powerOne = 1;
        }
        else {
            powerOne = powOne;
        }
        if (powTwo < 1) {
            powerTwo = 1;
        }
        else {
            powerTwo = powTwo;
        }
    }


    Binomial::Binomial(float coeffOne, int powOne, float coeffTwo) {
        coefficientOne = coeffOne;
        coefficientTwo = coeffTwo;
        if (powOne < 1 ) {
            powerOne = 1;
        }
        else {
            powerOne = powOne;
        }
        powerTwo = 1;
    }

    Binomial::Binomial(float coeffOne, int powOne) {
        coefficientOne = coeffOne;
        if (powOne < 1 ) {
            powerOne = 1;
        }
        else {
            powerOne = powOne;
        }
        coefficientTwo = 1;
        powerTwo = 1;
    }

    Binomial::Binomial(float coeffOne) {
        coefficientOne = coeffOne;
        powerOne = 1;
        coefficientTwo = 1;
        powerTwo = 1;
    }


    float Binomial::GetCoefficient(int index) const {
        if (index > 2 || index < 1) {
            return -1;
        }
        if (index == 1) {
            return coefficientOne;
        }
        else {
            return coefficientTwo;
        }
    }

    int Binomial::GetPower(int index) const {
        if (index > 2 || index < 1) {
            return -1;
        }

        if (index == 1) {
            return powerOne;
        }
        else {
            return powerTwo;
        }
    }



    int Binomial::SetPower(int index, int power) {
        if (power < 0) {
            power = 1;
        }

        if (index == 1) {
            powerOne = power;
            return 0;
        }
        else if (index == 2) {
            powerTwo = power;
            return 0;
        }

        return -1;
    }


    
    int Binomial::Add(const Binomial b) {
        if (b.GetPower(1) == powerOne) {
            coefficientOne += b.GetCoefficient(1);
            if (b.GetPower(2) == powerTwo) {
                coefficientTwo += b.GetCoefficient(2);
                return 0;
            }
            return 0;
        }

        return -1;
    }

    void Binomial::Multiply(float val) {
        coefficientOne *= val;
        coefficientTwo = val;
    }

    void Binomial::Multiply(float coeff, int pow) { 
        this->SetPower(1, this->GetPower(1) + pow);
        this->SetPower(2, this->GetPower(2) + pow);
        coefficientOne = coefficientOne * coeff;
        coefficientTwo = coefficientTwo * coeff;
    }


