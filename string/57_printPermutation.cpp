#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void Findper(int l , int r, vector<string>& ans, string s){
    if(l==r){
        ans.push_back(s);
        return;
    }
    for(int i = l;i<=r; i++){
        swap(s[l], s[i]);
        Findper(l+1, r, ans, s);
        swap(s[l], s[i]);
    }
}

vector<string> Pelindrome(string s){
    vector<string> ans;
    Findper(0, s.size()-1, ans, s);
    sort(ans.begin(),ans.end());
    return ans;
}


int main(){
    string s = "abc";
    vector<string> x = Pelindrome(s);

    for(int i = 0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }
}