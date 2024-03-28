#pragma once
#include <iostream>

class Pair {
protected:
    int first;
    int second;

public:
    // CONSTRUCTIONS
    Pair();
    Pair(int first, int second);
    Pair(const Pair& other);
    ~Pair();

    // SET GET
    void setFirst(int first);
    void setSecond(int second);
    int getFirst() const;
    int getSecond() const;

    // OPERATIONS > < == != >= <=
    bool operator>(const Pair& other) const;
    bool operator<(const Pair& other) const;
    bool operator==(const Pair& other) const;
    bool operator!=(const Pair& other) const;
    bool operator>=(const Pair& other) const;
    bool operator<=(const Pair& other) const;

    operator std::string() const;

    friend std::ostream& operator<<(std::ostream& out, const Pair& p);
    friend std::istream& operator>>(std::istream& in, Pair& p);
};
