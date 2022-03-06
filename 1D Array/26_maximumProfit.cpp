#include <iostream>
using namespace std;
#include<algorithm>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;



int maxProfit(vector<int> arr){
    int minOverall = arr[0]; //min overall gives you max profit
    vector<int> ps(arr.size(), 0);

    for(int i =1; i<arr.size(); i++){
        if(arr[i]<minOverall){
            minOverall = arr[i];
        }
        if(arr[i]-minOverall > ps[i-1]){
            ps[i] = arr[i]-minOverall;
        }
        else{
            ps[i] = ps[i-1];
        }
    }
    int maxOverall = arr[arr.size()-1]; // to maximize profit
    vector<int> pb(arr.size(), 0);
    for(int i = arr.size()-2;i>=0; i--){
        if(arr[i]>maxOverall){
            maxOverall = arr[i];
        }
        if(maxOverall - arr[i] > pb[i+1]){
            pb[i] = maxOverall -arr[i];
        }
        else{
            pb[i] = pb[i+1];
        }
    }
    int mp = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (ps[i] + pb[i] > mp)
        {
            mp = ps[i] + pb[i];
        }
    }
    return mp;
}


int main()
{
    vector<int> v = {7, 1, 5, 3, 4, 6};

    cout<<maxProfit(v);

    return 0;
}
