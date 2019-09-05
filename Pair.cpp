#include "Pair.h"

pair::pair(){
    x = " ";
    y = " ";
}

std::string pair::GetX(){
    return x;
}

std::string pair::GetY(){
    return y;
}

void pair::SetX(std::string a){
    x = a;
}

void pair::SetY(std::string b){
    y = b;
}