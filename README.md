# scientific-notation-cpp

# Overview

ScientificNotation is a C++ class that represents extremely large numeric values using scientific notation (coefficient + base-10 exponent). This design prevents overflow issues that occur with built-in data types such as `int` and `long long` when values grow beyond their storage limits.

The objective of the project is to design a custom numeric type that supports arithmetic operations, maintains normalized scientific notation format, and demonstrates proper object-oriented programming practices.

# Number Representation

Each value is stored internally as:

- Coefficient (double)
- Exponent (int)

Values are automatically normalized so that:

- The coefficient remains in the range [1, 10) or (-10, -1] when nonzero
- If the coefficient magnitude becomes ≥ 10, it is divided by 10 and the exponent increases
- If the coefficient magnitude becomes < 1 (and not zero), it is multiplied by 10 and the exponent decreases
- If the coefficient becomes 0, the exponent is reset to 0

This ensures consistent scientific-notation formatting across all operations.

# Arithmetic Rules

Addition is implemented using exponent alignment:

- Compare the exponents of both values
- Scale the smaller value’s coefficient to match the larger exponent
- Add the aligned coefficients
- Keep the larger exponent
- Normalize the result back into proper scientific notation

This approach allows very large values to be handled efficiently without relying on arbitrary-precision libraries.

# Core Concepts Applied

- Object-Oriented Programming (OOP)
- Encapsulation of internal numeric representation
- Scientific notation normalization logic
- Operator overloading (`+` and `<<`)
- Copy constructor and copy assignment operator
- Getter and setter functions with controlled state updates
- Helper functions to maintain class invariants

# Class Design

The `ScientificNotation` class maintains private member variables:

- `coefficient`
- `exponent`

It provides public functionality to:

- Construct values (default and parameterized through a single constructor)
- Copy and assign objects safely
- Access and modify internal values through getters and setters
- Add two ScientificNotation objects
- Output formatted values using the stream insertion operator (`<<`)

All values are normalized through an internal helper function to ensure consistent scientific-notation storage after construction, assignment, and arithmetic operations.

# How to Run

1. Compile the program using a C++ compiler (ex. g++, clang++)
2. Run the executable
3. Review the console output, which demonstrates constructor behavior, copying, setters/getters, normalization, and addition
