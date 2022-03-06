#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<string> SplitBinaryString(string s){
    vector<string> v ;
    if(s.size()==0){
        return v;
    }
    int counter = 0;
    for(int i = 1; i<s.size(); i++){
        if(s[i]=='1'){
            // done break and put it
            continue;
        }
        else if(s[i]=='0' && s[i-1]=='0'){
            continue;
        }
        else if(s[i]=='0' && s[i-1]=='1'){
            // break it
            string ans = s.substr(counter, i);
            counter = i;
            // cout<<"called
            v.push_back(ans);
        }
        
    }
    v.push_back(s.substr(counter));
    return v;
}


int main(){
    string s = "0110110111111111";
    vector<string> v = SplitBinaryString(s);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

}