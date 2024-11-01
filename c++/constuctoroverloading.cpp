//constructor overloading:
#include<iostream>
using namespace std;
class rectangle{
    public: 
        int length,width,area;
    public:
        rectangle(); //default constructor
        rectangle(int, int); //parameterized constructor
        int area_r(); //member function require datatype
};
rectangle :: rectangle(){ 
    cout<<"enter lenght and width:";
    cin>>length>>width;
}
rectangle :: rectangle(int l, int w){
    length=l;
    width=w;
}
int rectangle :: area_r(){
    area=length* width;
    cout<<"area of rectangle="<<area<<endl;
}
int main(){
    rectangle rect; //default
    rect.area_r();
    rectangle rt(4,5);
    rt.area_r();
}