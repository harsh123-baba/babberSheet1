
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

void nextPermutation(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        int index1=-1;
        for(int i = nums.size()-2;i>=0; i--){
            if(nums[i] < nums[i+1]){
                index1 = i;
                break;
            }
        }
        if(index1 < 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            int index2=0;
            for(int i = nums.size()-1; i>=0; i--){
                if(nums[i] > nums[index1]){
                    index2 = i;
                    break;
                }
            }
            swap(nums[index2], nums[index1]);
            reverse(nums.begin()+index1+1, nums.end());
            
        }
        
    }


int main(){
    vector<int> v = {1, 2, 5, 3, 4};
    nextPermutation(v);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i];
    }

}