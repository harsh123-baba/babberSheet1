#include<iostream>
using namespace std;

void allSubSeq(string s, string ans, int c){
    if(c== s.size()){
        cout<<ans<<endl;
        return;
    }
    char ch = s[c];
    allSubSeq(s, ans+ch, c+1);
    allSubSeq(s,ans, c+1);

}


int main(){
    string s="abc";
    allSubSeq(s, "", 0);
}