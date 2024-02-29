#include<iostream>
#include<vector>

using namespace std;
int main()
{
    // vector<vector<int>> arr;

    // vector<int> a{10,20,30};
    // vector<int> b{40,50,10,30,70};
    // vector<int> c{80,90};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0; i<arr.size(); i++)
    // {
    //     for(int j=0; j<arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> arr(5, vector<int> (5, -8));
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << arr[1][2];
    cin >> arr[1][2];
    cout << arr[1][2];
    return 0;
}