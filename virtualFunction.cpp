#include<iostream>
using namespace std;
class instruments{
public:
    virtual void makeSound()=0;
};
class piano: public instruments{
public:
    void makeSound(){
    cout<<"piano sound..."<<endl;

    }
};
class gitar: public instruments{
public:
    void makeSound(){
    cout<<"gitar sound..."<<endl;

    }
};
int main(){

    instruments *p1 = new piano();
    instruments *g1 = new gitar();
    p1->makeSound();
    //g1.makeSound();
    return 0;
}