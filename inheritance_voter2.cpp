#include<iostream>
#include<string>

using namespace std;

class basic{
    public:
    string name;
    int age;
    
    void get(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
    }
    
    void dis(){
        cout<<"The name of the voter is: "<<name<<endl;
        cout<<"The age of the voter is: "<<age<<endl;
    }
};

class voterinfo : public basic {
    public:
    int id;
    void get_1(){
        get(); 
        cout<<"enter id: ";
        cin>>id;
    }
    void dis_1(){
        dis();
        cout<<"The id is: "<<id<<endl;
        
    }
};

int main(){
    voterinfo v;
    v.get_1();
    v.dis_1();
    return 0;
}

