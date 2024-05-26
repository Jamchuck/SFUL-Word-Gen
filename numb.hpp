#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<random>

using namespace std;


class text {
private:
int a = 0;
int b = 7;
char e;
int curnum;
char curword[50];


public:
int mknumb(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 26);
    int it = distrib(gen);
    return it;
}
char inttochar(int d){
char ls[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
return ls[d];
}
string mkword(){
    string words;
    while (a <= b){
    curnum = mknumb();
    curword[a] = inttochar(curnum);
    a++;
    }
    words = curword;
    return words;
}

};