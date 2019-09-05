#include <iostream>
#include <string>

#ifndef PAIR_H
#define PAIR_H

class pair{
private:
    std::string x;
    std::string y;
public:
    pair();
    std::string GetX();
    std::string GetY();
    void SetX(std::string a);
    void SetY(std::string b);
};

#endif