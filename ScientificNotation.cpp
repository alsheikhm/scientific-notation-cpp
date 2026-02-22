// Mohammed Al-Sheikh
// ScientificNotation.cpp

#include "ScientificNotation.h"
#include <cmath>

// Default & Parameterized Constructor
ScientificNotation::ScientificNotation(double c, int e)
: coefficient(c), exponent(e)
{
    sciNot();
}

// Copy Constructor
ScientificNotation::ScientificNotation(const ScientificNotation& original)
: coefficient(original.coefficient), exponent(original.exponent)
{
    sciNot();
}

// Copy Assignment Operator
ScientificNotation& ScientificNotation::operator=(const ScientificNotation& original)
{
    if(this == &original)
    {
        return *this;
    }
    else
    {
        coefficient = original.coefficient;
        exponent = original.exponent;
        sciNot();
        return *this;
    }
}

// Coefficient Getter
double ScientificNotation::getCoefficient() const
{
    return coefficient;
}

// Exponent Getter
int ScientificNotation::getExponent() const
{
    return exponent;
}

// Coefficient Setter
void ScientificNotation::setCoefficient(double c)
{
    coefficient = c;
}

// Exponent Setter
void ScientificNotation::setExponent(int e)
{
    exponent = e;
    sciNot();
}

// Converts numbers to proper scientific notation
void ScientificNotation::sciNot()
{
    if(coefficient == 0.0)
    {
        exponent = 0;
        return;
    }
    
    while(std::fabs(coefficient) >= 10.0)
    {
        coefficient /= 10.0;
        exponent++;
    }
    
    while(std::fabs(coefficient) < 1.0)
    {
        coefficient *= 10.0;
        exponent--;
    }
}

// Adds two CookieNotation objects together
ScientificNotation ScientificNotation::operator+(const ScientificNotation &rhs) const
{
    int bigExp;
    
    if(exponent > rhs.exponent)
    {
        bigExp = exponent;
    }
    else
    {
        bigExp = rhs.exponent;
    }
    
    int diff1 = bigExp - exponent;
    int diff2 = bigExp - rhs.exponent;
    
    double c1 = coefficient;
    double c2 = rhs.coefficient;
    
    c1 /= std::pow(10.0, diff1);
    c2 /= std::pow(10.0, diff2);

    ScientificNotation sum(c1 + c2, bigExp);
    return sum;
}

// Prints the number cleanly
std::ostream& operator<<(std::ostream& os, const ScientificNotation& n)
{
    os << n.coefficient << "e" << n.exponent;
    return os;
}
