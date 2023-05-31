#include<iostream>
#include<string>

using namespace std;

class test{
    private:
        int area,b,h;
    public:
        void getdata(){
            cout<<"Enter the values of base and height: ";
            cin>>b>>h;
        }
        void display(){
            cout<<"The area is: "<<area<<endl;
        }
        
        friend void comp(test &t);
};

void comp(test &t){
    t.area=(t.b * t.h)*(0.5);
}

int main(){
    test t;
    t.getdata();
    
    comp(t);
    cout<<endl<<endl;
    t.display();
    return 0;
}