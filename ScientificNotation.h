// Mohammed Al-Sheikh
// ScientificNotation.h

#ifndef SCIENTIFICNOTATION_H
#define SCIENTIFICNOTATION_H

#include <ostream>

class ScientificNotation
{
public:
    ScientificNotation(double c = 0.0, int e = 0);
    
    ScientificNotation(const ScientificNotation& original);
    
    ScientificNotation& operator=(const ScientificNotation& original);
    
    double getCoefficient() const;
    int getExponent() const;
    
    void setCoefficient(double c);
    void setExponent(int e);
    
    ScientificNotation operator+(const ScientificNotation& rhs) const;
    
    friend std::ostream& operator<<(std::ostream& os, const ScientificNotation& n);
    
private:
    double coefficient;
    int exponent;
    void sciNot();
};

#endif
