//default constructor : the constructor which is define by the user is include and allocate the memory for it;
#include<iostream>
using namespace std;
class Points{
    public:
    int dance; //dm
    int singing;
    public:
    Points(){   //defalut constructor
        cout<<"Enter dancing points:";
        cin>>dance;
        cout<<"Enter singing points:";
        cin>>singing;
    }
    void show(){  // Member function
        cout<<"Dance="<<dance<<endl<<"singing="<<singing<<endl;
    }
};
int main(){
    Points pt;   //pt is my object;
    pt.show();
}