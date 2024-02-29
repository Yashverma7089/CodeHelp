#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
           return true;
    }
    return false;
}

int main()
{
    int arr[5] = {1,2,4,0,5};
    int size = 5;

    int key;
    cout << "Enter key to found in array : ";
    cin >> key;

    if(linearSearch(arr, size, key))
        cout << "key = " << key << " found" << endl;
    else
        cout << "key = " << key << " not found" << endl;
}