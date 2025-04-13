#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n ; 
    cin >> n ; 
    vector<int> a(n+1) ; 
    if(n % 2 != 0)
        cout << -1 << endl  ;
    else{
        for(int i = 1 ; i <= n ; i+=2){
            a[i] = i + 1 ; 
            a[ i + 1 ]  = i ; 
        }
        for(int i = 1 ; i <=n ; i++)
            cout << a[i] << ' ' ; 
    }
}