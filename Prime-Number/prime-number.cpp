#include<bits/stdc++.h>
using namespace std;
void isprime(int n){
    int flag = 0;
    for(int i =1;i<n;i++){
        if(n%i==0){
            flag+=1;
        }
    }
    if(flag<=2){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"The number is composite"<<endl;
    }
}

int main(){
    int t;
    cout<<"Enter a number for test case: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter a number to chaekt prime: ";
        cin>>n;
        isprime(n);
    }
    

    
}//
