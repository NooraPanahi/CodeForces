#include <iostream>
#include <string>
#include <vector>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t , n ;
    string s ; 

    cin >> t ;
    while (t--)
    {
        s = "1" ; 
        cin >> n ;
        vector<int> array ;
        int u=0; 
        for(int i = 0 ; i < n ; i++){
            int v ; 
            cin >> v ; 
            array.push_back(v) ;   
            if(i == 0 )
                continue;
            if(u==0){
                if(array.at(array.size()-1) >= array.at(array.size()-2)){
                s+= "1" ;    
               }else if(array.at(array.size()-1) <= array.at(0)){
               
                 s+= "1" ;u+=1;   
               }   else{
                s+="0" ;
                array.pop_back() ;
                
            }
            }else{
              
              if(array.at(array.size()-1) <= array.at(0) && array.at(array.size()-1) >= array.at(array.size()-2)){
                s+= "1" ; 
               }else{
                s+="0" ;
                array.pop_back() ;
                
                }
            }              
        }

        cout << s <<'\n'; 
        


    }

    return 0; 
    

}