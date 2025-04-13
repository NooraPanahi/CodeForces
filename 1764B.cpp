#include <iostream>
#include <vector>
using namespace std;

int gcd(int a , int b){
    while(b != 0){
        int temp = b ; 
        b = a % b ; 
        a = temp ; 
    }
    return a ; 
}


int main(){
    int testCase ; 
    cin >> testCase  ;
    vector<int> result; 
    while (testCase--){
        int num  , nums; 
        cin >> num ; 
        vector<int> a(num) ; 
        for(int i = 0 ; i < num ; i++){
            cin >> a[i] ; 
        }
        int g = a[0] ; 

        for(int i = 1 ; i < num ; i++){
            g = gcd(g, a[i]) ; 
        }
        result.push_back(a.back() / g) ; 
    }
        for(int res : result)
            cout << res << endl ; 
}