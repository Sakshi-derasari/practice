#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0;
    cout<<"Enter number:";
    cin>>num;
    // while(num!=0){
    //     rem=num%10;
    //     rev=(rev*10)+rem;
    //     num=num/10;
    // }
    for(int i=num;i>0;)
    {
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    cout<<"Reverse num="<<rev<<endl;
}