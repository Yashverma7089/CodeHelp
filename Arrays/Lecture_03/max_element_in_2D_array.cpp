#include <iostream>
#include <climits>
using namespace std;

int findMax(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
                maxi = arr[i][j];
        }
    }
    return maxi;
}

int main()
{
    int arr[3][3] = {{1, 2, 4}, {3, 12, 4}, {6, 7, 15}};

    cout << "Maximum element is : " << findMax(arr, 3, 3) << endl;
    return 0;
}