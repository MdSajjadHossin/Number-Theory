#include<bits/stdc++.h>
using namespace std;

bool prime(int n){

    for(int i = 2; i*i<=n; i++){
        if(n%i == 0)
            cout<<"Number Not Prime"<<endl;
        else
            cout<<"Number is Prime"<<endl;


    }

}

int main(){
    int n;
    cin>> n;

    prime(n);

}
