// Mohammed Al-Sheikh
// mainSciNot.cpp

#include <iostream>
#include "ScientificNotation.h"

int main()
{
    // Test for default constructor: expected result is 0e0
    std::cout << "Default Constructor:" << std::endl;
    
    ScientificNotation d;
    std::cout << "d = " << d << std::endl << std::endl;
    
    // Test for parameter constructor
    std::cout << "Parameterized Constructor: Example 1" << std::endl;
    
    ScientificNotation a(6.79, 3);
    ScientificNotation b(4.15, 8);
    
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl << std::endl;
    
    // Test for parameter constructor
    std::cout << "Parameterized Constructor: Example 2" << std::endl;
    
    ScientificNotation x(3.14159, 5);
    ScientificNotation y(1.23612, 2);
    
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "x + y = " << (x + y) << std::endl << std::endl;
    
    // Test for parameter constructor using a negative value
    std::cout << "Parameterized Constructor: Example 3" << std::endl;

    ScientificNotation m(-2.95, 4);
    ScientificNotation n(4.44, 4);
    
    std::cout << "m = " << m << std::endl;
    std::cout << "n = " << n << std::endl;
    std::cout << "m + n = " << (m + n) << std::endl << std::endl;
    
    // Test for copy constructor
    std::cout << "Copy Constructor:" << std::endl;
    
    ScientificNotation copyA(a);
    
    std::cout << "copy of a = " << copyA << std::endl << std::endl;
    
    // Test for copy assignment operator
    std::cout << "Copy Assignment Operator:" << std::endl;
    
    ScientificNotation assign;
    assign = x;
    
    std::cout << "assignment from x = " << assign << std::endl << std::endl;
    
    // Test for get and set functions of coefficients and exponents
    std::cout << "Getters and Setters Functions: " << std::endl;
    
    ScientificNotation z;
    z.setCoefficient(33.9);
    z.setExponent(4);
    
    std::cout << "After originally setting z = 33.9e4, now z = " << z << std::endl;
    std::cout << "After originally setting z = 33.9e4, now z's coefficient = " << z.getCoefficient() << std::endl;
    std::cout << "After originally setting z = 33.9e4, now z's exponent = " << z.getExponent() << std::endl << std::endl;
    
    return 0;
}
