//inline function

#include<iostream>
using namespace std;
inline int square(int l){
    return l*l;
}
inline int sum(int a, int b){
return a+b;
}
int main(){
    int a=10,b=50,l=5;
    cout<<"square="<<square(l)<<endl;
    cout<<"sum="<<sum(a,b)<<endl;
}