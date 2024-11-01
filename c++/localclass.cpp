//local class : the class which is defined in the main function is called local class.
//array of objects.
#include<iostream>
using namespace std;
int main(){
    class student{
        int rollno;
        float marks[4];

        public:
        int get_dt(){
            cout<<"enter rollno:";
            cin>>rollno;
            cout<<"enter marks:";
            for(int i=0;i<4;i++){
                cin>>marks[i];
            }
        }
        void show(){
            cout<<"rollno="<<rollno<<endl;
            for(int i=0;i<4;i++){
                cout<<"marks="<<marks[i]<<endl;
            }
        }
    };
    student st[2];
    for (int i=0;i<2;i++){
        st[i].get_dt();
        st[i].show();
    }
}