#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                string temp = word.substr(0,i+1);
                reverse(temp.begin(),temp.end());
                word=temp+word.substr(i+1,word.length());
                break;
            }
        }
        return word;
    }
};