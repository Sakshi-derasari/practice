// parameterized constructor : constructor having parameters.
//constructor is where class and having same name.
#include<iostream>
using namespace std;
class shape{
    private:
    int len,width; //private data member that can not directly accessed.
    public:
    shape(int l,int w){ //passed two parameter // parameterized constructor
        len=l;       // set two parameters
        width=w;
    }
    int area(){
        return len*width;
    }
};
int main(){
    shape sp(50,7);
    cout<<"area of shape="<<sp.area()<<"m"<<endl;
}

/*
int main(){
int a,b;
cout<<"enter lenght and width:";
cin>>a>>b;
shape sp(50,7); //static
cout<<"area of shape="<<sp.area()<<"m"<<endl;
shape sp1(a,b); //dynamic
cout<<"area of shape="<<sp1.area()<<"m"<<endl;
}
*/