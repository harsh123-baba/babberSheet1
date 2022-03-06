#include <vector>
#include <iostream>
using namespace std;

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here
    int count = 0;
    int max = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
            index = i;
        }
        count = 0;
    }
    return index;
}

int main()
{
    vector<vector<int>>arr = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}};
    int n = arr.size();
    int m = arr[0].size();
    cout<<rowWithMax1s(arr, n, m);
}