#include<iostream>
using namespace std;


bool isPillindrom(string s){
    int i = 0;
    int j = s.size()-1;
    while(i<j){
        if(s[i]==s[j]){
            // continue;
            i++;
            j--;
        }
        else{
            return false;
            break;
        }
    }
    return true;
}

int main(){
    string s = "HaaH";
    cout<<isPillindrom(s);
}
