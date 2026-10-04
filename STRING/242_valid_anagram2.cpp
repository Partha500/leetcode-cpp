#include <string>
#include <iterator>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
    if(s.size() != t.size()){
        return false ;
    }
    int arr[26]={};
    // counting in s 
    for(int i=0; i<s.size(); i++){
        arr[s[i]-'a']++ ;
    }
    // checking(removing) existence in t 
    for(int j=0; j<t.size(); j++){
        arr[t[j]-'a']-- ;
    }
    //checking if arr is empty or not 
    for(int i=0; i<size(arr); i++){
        if(arr[i] != 0){
            return false; 
        }
    }
    return true ;
    }
};