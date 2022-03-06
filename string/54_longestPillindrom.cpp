#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

string pillindrome(string s){
    string res = "";
    for(int i = 0; i<s.size(); i++){
        string ans = "";
        int j = i;
        while(j < s.size() && s[i] == s[j]){
            ans.push_back(s[j]);
            j++;
        }
        int k = i-1;
        while(k>=0 && s[k] == s[j]){
            ans = s[k] + ans + s[j];
            k--;
            j++;
        }
        if(res.size() < ans.size()){
            res = ans;
        }
    }
    return res;
}


int main(){
    string s;
    cin>>s;
    cout<<pillindrome(s);
}