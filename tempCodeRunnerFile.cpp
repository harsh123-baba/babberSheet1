#include<vector>
#include<iostream>
using namespace std;


double median(vector<int>& a, vector<int>& b){
    int n = a.size();
    int m = b.size();
    vector<int> v;
    int i = 0;
    int j = 0;
    int k = 1+((n+m)/2);

    cout<<k<<endl;
    while(k--){
        if(a[i]<b[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    double median;
    if((n+m )%2 == 0){
        median = (double(v[v.size()-1] + v[v.size()-2])/2);
    }
    else{
        median = double(v[v.size()-1]);
    }
    cout<<endl;
    cout<<n+m<<endl;
    cout<<v[v.size()-1]<<endl;
    return median;
}


int main(){
    vector<int> a = {1, 3};
    vector<int>b = {2, 4 ,5, 6, 7, 8, 9, 10};
    cout<<median(a, b);
}