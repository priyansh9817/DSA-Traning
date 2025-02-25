#include<iostream>
using namespace std;
int main(){
    int w;
    cout<<"Enter the weight of clothes"<<endl;
    cin>>w;
    if(w==0){
        cout<<"Estimated time will be 2 ";
    }
    else if(w>=1 && w<=2000){
         cout<<"Estimated time will be 25 ";
    }
    else if(w>=2001 && w<=4000){
         cout<<"Estimated time will be 35 ";
    }
    else if(w>=4001 && w<=7000){
         cout<<"Estimated time will be 45 ";
    }
    return 0;
}
