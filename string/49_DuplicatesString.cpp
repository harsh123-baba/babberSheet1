#include<string>
#include<unordered_map>
#include<iostream>
using namespace std;

void duplicates(string s){
    unordered_map<char, int> m;
    for(int i = 0; i<s.size(); i++){
        if(m[s[i]]){
            m[s[i]]++;
        }
        else{
            m[s[i]]=1;
        }
    }
    for(auto it = m.begin(); it!=m.end(); it++){
        if(it->second >1){
            cout<<it->first<<" ";
        }
    }
    cout<<endl;
}


int main(){
    string s = "haramanm";
    duplicates(s);
}