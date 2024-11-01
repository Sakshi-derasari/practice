//destructor : it destroys the memory which is allocate with the help of constructor.
// same name as class name but preccede with ~ sign. 
//dont return value , no overload, no prameter needed to provide.

#include<iostream>
using namespace std;
class add{
    public:
    int a,b;
    public:
    add(){
        cout<<"enter number:";
        cin>>a>>b;
    }
    int total(){
        return a+b;
    }
    ~add(){
        cout<<"destructor called.";
    }
};

int main(){
    add ad;
    cout<<"total of two numbers="<<ad.total()<<endl;
    cout<<"calling destruction"<<endl;
}