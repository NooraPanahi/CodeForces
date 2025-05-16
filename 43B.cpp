#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    int s1_counts[256] = {0}; //ASCII characters
    int s2_counts[256] = {0};
    
    // Count each character in s1 
    for (char c : s1) {
        if (c != ' ') {
            s1_counts[static_cast<char>(c)]++;
        }
    }
    
    for (char c : s2) {
        if (c != ' ') {
            s2_counts[static_cast<char>(c)]++;
        }
    }
    
    bool possible = true;

    for (int i = 0; i < 256; ++i) {
        if (s2_counts[i] > s1_counts[i]) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}