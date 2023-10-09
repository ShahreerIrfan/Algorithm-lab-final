#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 1900;i<=2000;i++){
        if(i%4==0){
            cout<<i<<" is Leap year"<<endl;
        }
        else{
            cout<<i<<" is not Leap year"<<endl;
        }
    }
}