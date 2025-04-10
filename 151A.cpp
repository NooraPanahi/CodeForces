#include <iostream>
#include <algorithm>

using namespace std ; 


int main(){
    int n, k , l , c , d , p , nl , np ;
    cin >>  n>> k >> l>> c>> d >> p >> nl >> np ; 
    int res = k * l ; 
    int res1 = res / nl ; 
    int resu =  c* d ;  
    int resul =  p / np ; 
    int aaa = min({res1, resu, resul}) ; 
    cout<< aaa /n ; 

}