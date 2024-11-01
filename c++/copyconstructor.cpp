//copy constructor :
/*
syntex: classname(const classname &objectname){ body of constructor } 
*/

#include<iostream>
using namespace std;
class value{
    private:
    int num1,num2;
    public:
    value(){ //default constructor
        cout<<"enter numbers:";
        cin>>num1>>num2;
    }
    value(const value &obj){ //copy constructor
        num1=obj.num1;
        num2=obj.num2;
    }
    void show(){
        cout<<"num1="<<num1<<endl<<"num2="<<num2<<endl;
    }
};

int main(){
    value v1; //obj for default constructor
    value v2 = v1; //obj for copy constructor
    v2.show();
}