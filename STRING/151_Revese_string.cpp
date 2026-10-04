#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        s="hello world";
        for(int i=0; i<s.size();i++){
            if(s[i]==' '){
                cout<<endl;
                continue;
            }
            cout<<s[i] ;
        }
    }
};