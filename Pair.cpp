#include "Pair.h"
#include <sstream>

// CONSTRUCTIONS
Pair::Pair() : first(0), second(0) {}
Pair::Pair(int first, int second) : first(first), second(second) {}
Pair::Pair(const Pair& other) : first(other.first), second(other.second) {}
Pair::~Pair() {}

// SET GET
void Pair::setFirst(int first) { this->first = first; }
void Pair::setSecond(int second) { this->second = second; }
int Pair::getFirst() const { return first; }
int Pair::getSecond() const { return second; }

// OPERATIONS > < == != >= <=
bool Pair::operator>(const Pair& other) const {
    return (first > other.first) || (first == other.first && second > other.second);
}
bool Pair::operator<(const Pair& other) const {
    return (first < other.first) || (first == other.first && second < other.second);
}
bool Pair::operator==(const Pair& other) const {
    return first == other.first && second == other.second;
}
bool Pair::operator!=(const Pair& other) const {
    return !(*this == other);
}
bool Pair::operator>=(const Pair& other) const {
    return (*this > other) || (*this == other);
}
bool Pair::operator<=(const Pair& other) const {
    return (*this < other) || (*this == other);
}


Pair::operator std::string() const {
    std::stringstream ss;
    ss << "(" << first << ", " << second << ")";
    return ss.str();
}

std::ostream& operator<<(std::ostream& out, const Pair& p) {
    out << "(" << p.first << ", " << p.second << ")";
    return out;
}

std::istream& operator>>(std::istream& in, Pair& p) {
    std::cout << "Enter the first number: ";
    in >> p.first;
    std::cout << "Enter the second number: ";
    in >> p.second;
    return in;
}