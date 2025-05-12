#include <iostream>
using namespace std;

bool isprime(int a){
    if(a==2)
        return true;
    if(a==1)
        return false;
    for(long p = 2; p * p <= a; p++){
        if(a % p){
            continue;
        }
        return false;
    }
    return true;
}

int main(){
    int t ,k;
    cin >> t;
    long x;
    while(t--){
        cin>> x >> k;
        if(x == 1){
            cout<<(k == 2 ? "Yes\n" : "No\n");
        }
        else if(k > 1){
            cout<<"No\n"; 
        }
        else{
            if(isprime(x))
                cout<< "Yes\n";
            else
                cout<<"No\n";
            
        }    
    }
}