#include<iostream>

#ifdef Fraction_h
#defind Fraction_h
class Fraction
{
    public:

    Fraction();
    Fraction(int numerator ,int denominator );
    void output();
    private:

    int numerator;
    int denominator;

};

Fraction::Fraction(){
    numerator = 0;
    denominator = 0;

}
Fraction::Fration(int num, int def ){
    numerator = num;
    denominator = def;
}
void Fraction::output{
    std::cout << numerator << "/" << denominator ;
}
#endif