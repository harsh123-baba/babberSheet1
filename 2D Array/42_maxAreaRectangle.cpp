#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int maxAreagreater(vector<int> v){
    int m = v.size();
    vector<int>rb(m);
    stack<int> s;
    rb[m-1] = m;
    s.push(m-1);
    for(int i = m-2; i>=0; i--){
        while(s.size()>0 && v[i] <= v[s.top()]){
            s.pop();
        }
        if(s.size()==0){
            rb[i] = m;
        }
        else{
            rb[i] = s.top();
        }
        s.push(i);
    }

    vector<int>lb(v.size());
    // vector<int>rb(m);
    stack<int> s1;
    lb[0] = -1;
    s1.push(0);
    for(int i = 1; i<m; i++){
        while(s1.size()>0 && v[i] <= v[s1.top()]){
            s1.pop();
        }
        if(s1.size()==0){
            lb[i] = -1;
        }
        else{
            lb[i] = s1.top();
        }
        s1.push(i);
    }
    int maxArea = 0;
    for(int i = 1; i<m; i++){
        int width = rb[i] - lb[i]-1;
        int area = width*v[i];
        if(area > maxArea){
            maxArea = area;
            // cout<<width<<" "<<rb[i]<<" "<<lb[i]<<endl;
        }
    }

    return maxArea;
}



int maxAreaRectangle(vector<vector<int>> v){
    int n = v.size();
    int m = v[0].size();
    vector<int> currRow = v[0];
    int maxArea = maxAreagreater(currRow);
    for(int i = 1; i<n;i++){
        for(int j = 0;j<m; j++){
            if(v[i][j] == 1){
                currRow[j]+=1;
            }
            else{
                currRow[j]=0;
            }
        }
        int area = maxAreagreater(currRow);

        if(area>maxArea){
            maxArea = area;
            // cout<<maxArea<<endl;
        }
    }
    return maxArea;
    // return v[n-1];
}
// maximum size histogram
// to get this we need the fucking next greater 






int main(){
    // vector<vector<int>> v = {{0, 0, 0, 0, 0},
    //                         {1, 0, 0, 1, 1},
    //                         {1, 1, 1, 1, 1},
    //                         {1, 1, 1, 1, 0},
    //                         {1, 1, 0, 1, 1}
    
    // };

// vector<vector<int>> v =  {{0, 1 ,1 ,0},
//          {1, 1, 1, 1},
//          {1, 1, 1, 1},
//          {1 ,1 ,0 ,0}};

    vector<vector<int>> v = {{1, 1, 0, 0, 0},
                            {1, 1, 1, 1, 1}};
    // vector<int> x = maxAreaRectangle(v);
    // for(int i = 0; i<x.size();i++){
    //     cout<<x[i]<<" ";
    // }
    // cout<<endl;
    // cout<<maxAreagreater(x);
    cout<<maxAreaRectangle(v);
}