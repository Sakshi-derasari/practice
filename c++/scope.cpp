// program to us eglobal variable.
#include<iostream>
#include<iomanip> // header file for setw
using namespace std;
int num=50; //global variable
int main(){
    int num=30,num2=10;
    cout<<"Add="<<num+num2<<endl;
    // //cout<<"# numbers add="<<num+num2+::num<<endl;
    // // or only one line // cout<<"Add="<<num+num2<<endl<<"3 numbers"<<num+num2+::num<<endl;
    // // setw() : it is used to set width for aparticular variables.
    // int a,b,c;
    // cout<<"enter numbers:";
    // cin>>a>>b>>c;
    // cout<<"a="<<setw(5)<<a<<endl<<"b="<<setw(5)<<b<<endl<<"c="<<setw(5)<<c<<endl;


    // // setprecision():= it osused with float values.

    // float f=27.36547;
    // cout<<"F="<<f<<endl;
    // cout<<"F="<<setprecision(5)<<f<<endl;
    // cout<<fixed; // it takes values after .point ex. 5  123.12345,takes fixed value and give in output after dot.
    // cout<<"F="<<setprecision(9)<<f<<endl;


    //setfilled(char) : it is used to fill the char in front of the given number.
    int n=14258;
    cout<<"n="<<setw(10)<<setfill('x')<<n<<endl; // fill the space before numbers xxxxx14258.
}