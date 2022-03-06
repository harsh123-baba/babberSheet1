#include<iostream>
#include<vector>
using namespace std;

int SellBuyStock(vector<int> v){
    int minPrice = INT32_MAX;
    int maxProfit = 0;
    for(int i = 0; i<v.size()-1; i++){
        if(v[i] < minPrice){
            minPrice =  v[i];
        }
        else if(v[i]-minPrice > maxProfit){
            maxProfit = v[i]-minPrice;
        }
    }
    return maxProfit;
}

int main(){
    vector<int> v = {7,1,5,3,6,4};
    cout<<SellBuyStock(v);
}