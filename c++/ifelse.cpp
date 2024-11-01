#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:";
    cin>>age;
    if(age>18){
        cout<<"able to vote"<<endl;
    }
    else{
        cout<<"not able to vote"<<endl;
    }
}