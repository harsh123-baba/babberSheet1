#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Reverse(string& s){
    int i = 0;
    int j = s.size()-1;
    while(i<j){
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }
    // return s;
}

int main(){
    string s = "Hii";
    // string k = Reverse(s);
    // cout<<k;
    Reverse(s);
    cout<<s;
}