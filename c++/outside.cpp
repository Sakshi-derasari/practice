// to define the member function outside the class.
#include<iostream>
#define pi 3.14
using namespace std;
class Circle{
    private:float radius,arr;
    public:
    void get_r();
    int area();
};
// datatype classname :: function name(){
//     body of function
// }
void Circle :: get_r(){
    cout<<"Enter radius:";
    cin>>radius;                       
}
int Circle :: area(){
    arr=pi *radius*radius;
    cout<<"Area="<<arr<<endl;
}
int main(){
    Circle cr;
    cr.get_r();
    cr.area();
}