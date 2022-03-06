#include<queue>
#include<iostream>
using namespace std;


bool isRotation(string s1, string s2){
    if(s1.size()!= s2.size()){
        return false;
    }
    queue<char> s1q;
    queue<char>s2q;
    for(int i = 0; i<s1.size(); i++){
        s1q.push(s1[i]);
    }
    for(int i = 0; i<s2.size(); i++){
        s2q.push(s2[i]);
    }
    int k = s2.size();
    while(k--){
        char ch = s2q.front();
        s2q.pop();
        s2q.push(ch);
        if(s1q==s2q){
            return true;
        }
    }

    return false;
}


int main(){
    string s1 = "ABCD";
    string s2 = "DCBA";
    cout<<isRotation(s1, s2);
}