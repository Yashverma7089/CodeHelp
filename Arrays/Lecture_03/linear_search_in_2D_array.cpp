#include<iostream>
using namespace std;

bool linearSearchIn2DArray(int arr[][3], int row, int col, int key)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(key == arr[i][j])
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {{1, 2, 4}, {3, 12, 4}, {6, 7, 5}};
    // int row, col;
    // cout << "Enter the values of row and col : ";
    // cin >> row >> col;

    // cout << "Enter elements in array : " << endl;
    // for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    int key;
    cout << "Enter key you want to search : ";
    cin >> key;

    bool ans = linearSearchIn2DArray(arr, 3, 3, key);

    if(ans)
        cout << "Key = " << key << " is present" << endl;
    else
        cout << "Key = " << key << " is absent" << endl;
    return 0;
}