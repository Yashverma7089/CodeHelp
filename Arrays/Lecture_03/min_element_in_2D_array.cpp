#include <iostream>
#include <climits>
using namespace std;

int findMin(int arr[][3], int row, int col)
{
    int mini = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < mini)
                mini = arr[i][j];
        }
    }
    return mini;
}

int main()
{
    int arr[3][3] = {{1, -2, 4}, {3, 12, 4}, {6, 7, 15}};

    cout << "Minimum element is : " << findMin(arr, 3, 3) << endl;
    return 0;
}