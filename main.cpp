#include<iostream>
#include<stdlib.h>
#include<string.h>
#include"numb.hpp"

text txt;

int main(){
    string toprint = txt.mkword();
    std::cout << toprint << endl;
    system("pause");
    return 0;
}