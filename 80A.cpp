#include <iostream> 
using namespace std ; 

bool prime(int num){
    if(num<2)
        return false ; 
        for(int i = 2 ; i*i <= num ; i++){
            if(num % i == 0){
                return false ;
            }
        }
        return true ; 
}
int nextprime(int n){
    int next = n + 1 ;
    while(!prime(next)){
        next++ ; 
    } 
    return next ;
}
int main(){
    int n , m ; 
    cin >> n >> m ; 
    if(nextprime(n) == m)
        cout << "YES" ; 
    else
        cout << "NO" ; 
}