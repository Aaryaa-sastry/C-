#include<iostream>
#include<string>

using namespace std;

void check(string type, int age ){
    if(age >=18){
        if(type == "A+" || type == "O+"){
            cout<<"yes eligible";
        }
        else{
        cout<<"not eligible \n"<<endl;

        }
    }
    else{
        cout<<"not eligible \n"<<endl;
    }
}

int main(){
    int age[20],n;
    string type[20];
    cout<<"enter n: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"enter blood type: ";
        cin>>type[i];
    }
    for(int i=0;i<n;i++){
        cout<<"enter age: ";
        cin>>age[i];
    }
    for(int i=0;i<n;i++){
        check(type[i], age[i]);
    }
    
}