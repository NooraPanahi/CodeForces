#include <iostream>
using namespace std ; 
bool lucky(long long int n){
    int lockycount = 0 ;
    while ((n>0)){
        int digit = n%10 ;
        if(digit == 7 || digit == 4)
            lockycount++ ;
        n/=10 ;
    }
    return (lockycount ==4 || lockycount== 7) ;
}
int main(){
    long long int n ;
    cin >> n ;
    if(lucky(n)){
        cout << "YES" ; 
    }else
    cout << "NO" ; 
}