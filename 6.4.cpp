/*THIS PROGRAM IS PREPARED BY 24CE066_RENA
6.4 POINTER and DAM – Fixing memory leaks in inheritance*/
#include<iostream>
using namespace std;
class Base {
public:
Base()
{
    cout<<"Base constructor called"<< endl;
}
~Base()
{
    cout<<"Base destructor called"<<endl;
}
};
class Derived : public Base{
private:
    int* data;

public:
    Derived(){
    data= new int[5];
    cout<<"Derived constructor: Resource allocated"<<endl;
    }
    ~Derived(){
        delete[] data;
    cout<<"Derived destructor: Resource deallocated"<<endl;
    }
};
int main()
{
Base* ptr= new Derived();
delete ptr;
cout<<"Rena Naik-24CE066";
return 0;

}
