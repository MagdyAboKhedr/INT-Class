#include <iostream>
#include "include.hpp"

int main() {
    // Testing Constructors
    INT a(10); // Constructor with value
    INT b(20); // Constructor with value
    INT c;     // Default constructor

    std::cout << "Testing Constructors: \n";
    std::cout << "a: " << a << std::endl;  // Should print 10
    std::cout << "b: " << b << std::endl;  // Should print 20
    std::cout << "c (default): " << c << std::endl; // Should print nothing (nullptr or uninitialized)

    // Testing Copy Constructor
    INT d = a; // Copy constructor
    std::cout << "\nTesting Copy Constructor (d = a): \n";
    std::cout << "d: " << d << std::endl; // Should print 10

    // Testing Move Constructor
    INT e = std::move(b); // Move constructor
    std::cout << "\nTesting Move Constructor (e = std::move(b)): \n";
    std::cout << "e: " << e << std::endl; // Should print 20
    std::cout << "b after move: " << b << std::endl; // Should print uninitialized or 0

    // Testing Copy Assignment Operator
    c = a;
    std::cout << "\nTesting Copy Assignment (c = a): \n";
    std::cout << "c: " << c << std::endl; // Should print 10

    // Testing Move Assignment Operator
    c = std::move(e);
    std::cout << "\nTesting Move Assignment (c = std::move(e)): \n";
    std::cout << "c: " << c << std::endl; // Should print 20
    std::cout << "e after move: " << e << std::endl; // Should print uninitialized or 0

    // Testing Arithmetic Operators
    INT f = a + c; // Testing addition
    INT g = a - d; // Testing subtraction
    INT h = a * d; // Testing multiplication

    std::cout << "\nTesting Arithmetic Operators: \n";
    std::cout << "f = a + c (10 + 20): " << f << std::endl; // Should print 30
    std::cout << "g = a - d (10 - 10): " << g << std::endl; // Should print 0
    std::cout << "h = a * d (10 * 10): " << h << std::endl; // Should print 100

    // Testing Pre/Post Increment and Decrement Operators
    INT i = ++a; // Pre-increment
    INT j = a++; // Post-increment
    INT k = --a; // Pre-decrement
    INT l = a--; // Post-decrement

    std::cout << "\nTesting Increment and Decrement Operators: \n";
    std::cout << "i = ++a (pre-increment): " << i << std::endl; // Should print 11
    std::cout << "j = a++ (post-increment): " << j << std::endl; // Should print 11, a is now 12
    std::cout << "k = --a (pre-decrement): " << k << std::endl; // Should print 11
    std::cout << "l = a-- (post-decrement): " << l << std::endl; // Should print 11, a is now 10

    // Testing Comparison Operators
    std::cout << "\nTesting Comparison Operators: \n";
    std::cout << "Is a > d? " << (a > d ? "True" : "False") << std::endl; // Should print False
    std::cout << "Is a != d? " << (a != d ? "True" : "False") << std::endl; // Should print False (both are 10)

    // Testing Friend Functions (int + INT and int - INT)
    int count = 5;
    std::cout << "\nTesting Friend Functions (int + INT, int - INT): \n";
    std::cout << "count + a (5 + 10): " << count + a << std::endl; // Should print 15
    std::cout << "count - a (5 - 10): " << count - a << std::endl; // Should print -5

    // Testing Input Stream Overloading
    INT userInput;
    std::cout << "\nEnter a value for INT userInput: ";
    std::cin >> userInput; // Testing input stream operator >>
    std::cout << "You entered: " << userInput << std::endl;

    return 0;
}
