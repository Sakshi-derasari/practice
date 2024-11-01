//multiple inheritance has the problem the if both the class has same name for member function then the problems occur.

#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"IM in class A"<<endl;
    }
};
class B{
    public:
    void show(){
        cout<<"im in class b"<<endl;
    }
};
class C :public A,B{
    public:
    void show(){
        A::show();
        B::show();
    }
}