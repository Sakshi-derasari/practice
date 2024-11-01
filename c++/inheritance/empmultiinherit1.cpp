#include<iostream>
using namespace std;
class emp_name{
    protected:
    string ep_name;
    public:
    void get_ep(){
        cout<<"enter employee name:";
        cin>>ep_name;
    }
     void show_ep(){
        cout<<"employee name="<<ep_name<<endl;
     }
};
class emp_id{
    protected:
    int em_id;
    public:
    void get_em(){
        cout<<"enter employee id:";
        cin>>em_id;
    }
    void show_em(){
        cout<<"employee id="<<em_id<<endl;
     }
};

class dept :protected emp_name, emp_id{
    public: 
    int emp;
    public:
    void emp_detail(){
        get_ep();
        get_em();
    }
       void show(){
        cout<<"employee details="<<endl;
        show_ep();
        show_em();
      
    }
};

int main(){
    dept dt;
    dt.emp_detail();
    dt.show();
}