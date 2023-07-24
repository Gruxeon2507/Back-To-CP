#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isalpha(s[i])&& isalpha(s[j])){
                char temp =s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
            if(!isalpha(s[i]))i++;
            if(!isalpha(s[j]))j--;

        }
        return s;
    }
};