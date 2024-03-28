#include "Rational.h"
#include <sstream>

// CONSTRUCTIONS
Rational::Rational() : numerator(0), denominator(1) {}
Rational::Rational(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}
Rational::Rational(const Rational& other) : numerator(other.numerator), denominator(other.denominator) {}
Rational::~Rational() {}


// SET GET
void Rational::setNumerator(int numerator) {
    this->numerator = numerator;
}
void Rational::setDenominator(int denominator) {
    this->denominator = denominator;
}
int Rational::getNumerator() const {
    return numerator;
}
int Rational::getDenominator() const {
    return denominator;
}

// OPERATIONS > < == != >= <=
bool Rational::operator>(const Rational& other) const {
    return (numerator * other.denominator > other.numerator * denominator);
}
bool Rational::operator<(const Rational& other) const {
    return (numerator * other.denominator < other.numerator * denominator);
}
bool Rational::operator==(const Rational& other) const {
    return (numerator * other.denominator == other.numerator * denominator);
}
bool Rational::operator!=(const Rational& other) const {
    return !(*this == other);
}
bool Rational::operator>=(const Rational& other) const {
    return (*this > other) || (*this == other);
}
bool Rational::operator<=(const Rational& other) const {
    return (*this < other) || (*this == other);
}

Rational::operator std::string() const {
    std::stringstream ss; 
    ss << numerator << "/" << denominator; 
    return ss.str();
}

std::ostream& operator<<(std::ostream& out, const Rational& p) {
    out << "(" << p.getNumerator() << ", " << p.getDenominator() << ")";
    return out;
}

std::istream& operator>>(std::istream& in, Rational& p) {
    int numerator, denominator;
    std::cout << "Enter the numerator: ";
    in >> numerator;
    p.setNumerator(numerator); 
    std::cout << "Enter the denominator: ";
    in >> denominator;
    p.setDenominator(denominator); 
    return in;
}
