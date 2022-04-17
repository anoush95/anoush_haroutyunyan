#ifndef POLYNOMIAL_H 
#define POLYNOMIAL_H

class Polynomial
{
private:
        int _coef[100];
        int _deg;
public:
        Polynomial();
        void Set(int, int);
        int Degree();
        void Print();
	Polynomial operator+ (const Polynomial& b) const;
	Polynomial &operator+= (const Polynomial& b);
        Polynomial operator-(const Polynomial& b) const;
	Polynomial &operator-= (const Polynomial& b);
        Polynomial operator*(const Polynomial& b) const;
	Polynomial &operator*= (const Polynomial& b);
        Polynomial MultiplyByNumber(int);
};
#endif
