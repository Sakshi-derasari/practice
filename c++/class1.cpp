//class program : collection of data member and member function is class..
#include<iostream>
using namespace std;
class person{
    // if we put private modifier here then member function should be public to get or access data.
    public: // or private modifier //modifier that protects data.
    int pid; //data member
    string name; //data member
    public:
    void get_data(){ //member function
        cout<<"enter id:";
        cin>>pid;
        cout<<"enter name:";
        // (or) cin>>name;
        cin.ignore(); // it takes the dta value of string otherwise ignores it.
        getline(cin,name);
    }
    void show(){
        cout<<"pid="<<pid<<endl<<"name="<<name<<endl;
    }
};

int main(){
    person p;
//    p.pid=1;
//     p.name="sakshi";
//     cout<<"ID="<<p.pid<<endl<<"name="<<p.name<<endl; 
p.get_data(); // p is object
p.show(); // with dot operator can access member function
}