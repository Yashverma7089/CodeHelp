#include<iostream>
using namespace std;

void rowSum(int arr[][3], int row, int col)
{
    int row_sum;
    
    for(int i=0; i<row; i++)
    {
        row_sum = 0;
        for(int j=0; j<col; j++)
        {
            row_sum += arr[i][j];
        }
        cout << "Row sum for " << i+1 << " row is : " << row_sum << endl;
    }
}

int main()
{
    int arr[3][3];
    int row, col;
    cout << "Enter the values of row and col : ";
    cin >> row >> col;

    cout << "Enter elements in array : " << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }

    rowSum(arr, row, col);
    return 0;
}