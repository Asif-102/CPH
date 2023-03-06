/**
* author: asif_102
* created: 2023-03-07 00:55:55
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    while(ss >> word){
        cout << word << '\n';
    }
    return 0;
}