#include<iostream>
#include<string>

using namespace std;

class account {
    public:
    string name;
    
    void getdata(){
        cout<<"enter the name: ";
        cin>>name;
    }
    void display(){
        cout<<"The name is: "<<name<<endl;
    }
};

class saving : public account {
    public:
    int c;
    int money, withdraw , rema;
    void comp(){
        cout<<"enter the money: ";
        cin>>money;
        cout<<"enter the withrawal money: ";
        cin>>withdraw;
    }
    void disp(){
        if(money > withdraw){
            rema = money - withdraw;
            
            cout<<"The amount remaining is: "<<rema<<endl;
        }
        else{
            cout<<"The amount is insufficient. Error.";
        }
    }
};

class merge : public saving {
    public : 
    void get(){
        getdata();
        comp();
    }
    void display_1(){
        display();
        disp();
    }
};

int main(){
    merge m;
    m.get();
    m.display_1();
    return 0;
}