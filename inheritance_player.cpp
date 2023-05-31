#include<iostream>
#include<string>
using namespace std;

class player{
    public:
    string name;
    int age;
    int g;
    void get(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
    }
    void dis(){
        cout<<"The name: "<<name<<endl;
    }
};

class batsman : public player{
    public:
    int run;
    void get_1(){
        get();
        cout<<"runs taken: ";
        cin>>run;
    }
    void dis_1(){
        cout<<"The runs scored: "<<run<<endl;
    }
};

class bowl : public player{
    public:
    int b;
    void get_2(){
        cout<<"number of people out ";
        cin>>b;
    }
    void dis_2(){
        cout<<"The score by the bowler: "<<b<<endl;
    }
};

class merge : public bowl , public batsman{
    public:
    void getdata(){
        get_1();
        get_2();
    }
    void display(){
        dis_1();
        dis_2();
        if(run>=20 && b>=3){
            cout<<"The player is qualified."<<endl;
        }
        else{
            cout<<"The player is not qualified."<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter the number of players: ";
    cin>>n;
    merge m[n];
    for(int i=0;i<n;i++){
        m[i].getdata();
    }
    for(int i=0;i<n;i++){
        m[i].display();
    }
    return 0;
}