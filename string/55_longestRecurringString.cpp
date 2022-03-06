#include<vector>
#include<iostream>
using namespace std;

int LongestRecurringString(string s){
    vector<vector<int>> dp(s.size()+1, vector<int>(s.size()+1, 0));
    for(int i = 0; i<s.size()+1; i++){
        dp[i][0] = 0;
    }
    for(int i = 1; i<s.size()+1; i++){
        dp[0][i] = 0;
    }

    for(int i = 1; i<s.size()+1;i++){
        for(int j = 1; j<s.size()+1; j++){
            if(i!= j && s[i]==s[j]){
                dp[i][j] = 1+ dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[s.size()][s.size()];

}




int main(){
    string s = "axxxy";
    cout<<LongestRecurringString(s);
}