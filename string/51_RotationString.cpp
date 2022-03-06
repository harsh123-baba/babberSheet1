// Algorithm :

// 1. If the size of both the strings is not equal, then it can never be possible.

// 2. Push the original string into a queue q1.

// 3. Push the string to be checked inside another queue q2.

//  4. Keep popping q2‘s and pushing it back into it till the number of such operations are less than the size of the string.

// 5. If q2 becomes equal to q1 at any point during these operations, it is possible. Else not.

// Example:                 
//                      str1 = "ABACD"
//                      str2 = "CDABA"

//      temp = str1.str1 = "ABACDABACD"
//      Since str2 is a substring of temp, str1 and str2 are 
//      rotations of each other.



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