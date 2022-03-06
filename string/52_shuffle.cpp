#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


bool shuffle(string s1, string s2){
    // sort(s1, s1+s1.size()-1);
    // sort(s2, s2+s2.size()-1);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1==s2){
       return true; 
    }
    
    return false;

}


int main(){
    string s1 = "abbbbba";
    string s2 = "bbbbbaa";
    cout<<shuffle(s1, s2);

}