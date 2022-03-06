#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int lengthOfLongestSubstring(string s) {
        unordered_set<char> map;
        int maxima = INT32_MIN;
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(map.find(s[i])==map.end()){
                map.insert(s[i]);
                count ++;
                if(count > maxima){
                    maxima = count;
                }
            }
            else{
                count =0;
                map.erase(map.begin(), map.end());
            }
        }
        return maxima;
    }
int main(){
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s);
}