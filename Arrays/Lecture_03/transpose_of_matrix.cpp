#include <iostream>
using namespace std;

void findTranspose(int arr[][4], int row, int col, int transposeArr[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][4], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printArray1(int arr[][3], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4] = {{1, 2, 4}, {3, 12, 4}, {6, 7, 15}};
    int transposeArr[4][3];

    cout << "Printing Array " << endl;
    printArray(arr,3,4);
    cout << "Starting transpose " << endl;
    findTranspose(arr, 3, 4, transposeArr);
    cout << "Printing Array again " << endl;
    printArray1(transposeArr,4,3);
    return 0;
}