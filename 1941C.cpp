#include <iostream>
#include <vector>
using namespace std ; 

int main(){
    int testcases ;
    cin >> testcases ; 
    vector<int> result; 
    while (testcases--){
        string str ; 
        int num  , res = 0 ; 
        cin >> num ; 
        cin >> str ; 
        for(int i = 0 ; i < num-2 ; ){
            if(str[i] == 'p' && str[i+1] == 'i' && str[i+2] == 'e'){
                res++ ; 
                i += 3 ; 

            }
            else if(str[i] == 'm' && str[i+1] == 'a' && str[i+2] == 'p'){
                res++ ; 
                i += 3 ; 
            }else {
                i++ ; 
            }
        }
        result.push_back(res);

    }
    for(int res: result){
        cout << res << endl ; 
    }
}