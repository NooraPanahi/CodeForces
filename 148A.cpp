#include <iostream>
using namespace std ; 


int main(){
    int k; //punched
    int l ; //tail shot
    int m; //paws trampled
    int n; //threatened
    int d ; //total
    cin >> k >> l >> m >> n >> d ; 
    int damaged = 0  ; 
        for(int dragon = 1 ; dragon <= d ; ++dragon){
            if(dragon % k == 0  || dragon % l == 0 || dragon % m == 0 || dragon % n == 0)
                damaged++ ; 
        }
        cout << damaged << endl  ; 
}