#include<iostream>
using namespace std;

class test{
    public:
    string name;
    int age;
    void get(){
        cout<<"enter: ";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
    }
    void dis(){
        cout<<"the name: "<<name<<endl;
        cout<<"the age: "<<age<<endl;
    }
};

class info : public test{
    public:
    void getdata(){
        get();
    }
    void display(){
       dis();
       if(age>18){
           cout<<"yes"<<endl;
       }
       else{
           cout<<"no"<<endl;
       }
    }
};

int main(){
    int c;
    cout<<"enter the number of user: ";
    cin>>c;
    info i[c];
    for(int j=0;j<c;j++){
        i[j].getdata();
    }
    cout<<"---information---"<<endl;
    for(int j=0;j<c;j++){
        i[j].display();
    }
    return 0;
}