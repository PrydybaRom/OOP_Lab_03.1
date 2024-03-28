#pragma once
#include "Pair.h"

class Rational : public Pair {
private:
    int numerator;
    int denominator;

public:

    // CONSTRUCTIONS
    Rational();
    Rational(int numerator, int denominator);
    Rational(const Rational& other);
    ~Rational();

    // SET GET
    void setNumerator(int numerator);
    void setDenominator(int denominator);
    int getNumerator() const;
    int getDenominator() const;

    // OPERATIONS > < == != >= <=
    bool operator>(const Rational& other) const;
    bool operator<(const Rational& other) const;
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    bool operator>=(const Rational& other) const;
    bool operator<=(const Rational& other) const;

    operator std::string() const;

    friend std::ostream& operator<<(std::ostream& out, const Rational& p);
    friend std::istream& operator>>(std::istream& in, Rational& p);
};
