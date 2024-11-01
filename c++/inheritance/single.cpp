// single inheritance: in which we have one parent class an one child class.
// syntex to inherit: // class child_name : access modifier parent class_name{body of the class}

#include<iostream>
using namespace std;
class person{ // parant class
    public:
    int pid;
    string name;
    public:
    void get_details(){
        cout<<"enter pid:";
        cin>>pid;
        cout<<"enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void display(){
        cout<<"person id:"<<pid<<endl<<"name="<<name<<endl;
    }
};
class dep: public person{ //child class 
    public:
    string dep_nm;
    public:
    void get(){
        get_details();
        cout<<"enter department name:";
        cin.ignore();
        getline(cin, dep_nm);
    }
    void show(){
        display();
        cout<<"department name="<<dep_nm<<endl;
    }
};
int main(){
    dep dp;
    dp.get();
    dp.show();
}