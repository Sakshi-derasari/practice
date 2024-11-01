//nested class : class inside class.
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"I am in class A"<<endl;
    }
    class B{
        public:
        void show(){
            cout<<"I am in class B"<<endl;
        }
    };
};
int main(){
    A a;
    a.show();
    A::B ab;
    ab.show();
}