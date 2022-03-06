#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
#define MAX 100

void rotate(int n,int arr[][MAX])
{
    //code here
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i =0; i<n; i++){
        int li = 0;
        int ri = n-1;
        while(li<ri){
            int temp = arr[li][i];
            arr[li][i] = arr[ri][i];
            arr[ri][i] = temp;
            li++;
            ri--;
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int v[][MAX] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    rotate(3, v);

}