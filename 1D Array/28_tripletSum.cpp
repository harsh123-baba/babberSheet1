#include<unordered_set>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

// O(N^2) time O(N) space
bool Triplet(int A[], int n , int x){
    for(int i = 0;i<n-2; i++){
        int curr = x-A[i];
        unordered_set<int> s;
        for(int  j = i+1; j<n; j++){
            if(s.find(curr-A[j])!=s.end()){
                cout<<A[i]<<" "<<curr-A[j]<<" "<<A[j]<<"\n";
                return true;
                break;
            }
            s.insert(A[j]);
        }
    }
    return false;

}

// O(N^2) time and O(1)space

bool TripletOptimal(int A[], int n, int X){
    sort(A , A+n);
    for(int i = 0; i<n-2; i++){
        int l = i+1;
        int r = n-1;
        while(l<r){
            if(A[i]+A[l]+A[r] == X){
                return true;
                break;
            }
            else if(A[i]+A[l]+A[r] > X){
                r--;
            }
            else{
                l++;
            }
        }
    }
    return false;

}


vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> v;
        
        vector<int> x(3);
        if(nums.size()<3){
            return v;
        }
        sort(nums.begin(), nums.end());
        for(int  i = 0; i<nums.size()-2; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int h = nums.size()-1;
            while(l<h){
                if(nums[i]+nums[l]+nums[h] ==0){
                    // x[0] = nums[i];
                    // x[1] = nums[l];
                    // x[2] = nums[h];
                    v.push_back({nums[i], nums[l], nums[h]});
                    while(l+1<h && nums[l]==nums[l+1]) l++;
                    while(h-1>l && nums[h]==nums[h-1]) h--;
                    l++;
                    h--;
                    // i++;
                }
                else if(nums[i]+nums[l]+nums[h] > 0){
                    h--;
                }
                else{
                    l++;
                }
            }
        }
        return v;
    }

int main(){
    int A[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<Triplet(A, n, 13)<<endl;
    cout<<TripletOptimal(A, n, 13)<<endl;

}