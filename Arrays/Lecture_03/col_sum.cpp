#include<iostream>
using namespace std;

void colSum(int arr[][3], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        int col_sum = 0;
        for(int j=0; j<col; j++)
        {
            col_sum += arr[j][i];
        }
        cout <<  col_sum << endl;
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

    colSum(arr, row, col);
    return 0;
}