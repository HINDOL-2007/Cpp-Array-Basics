#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << endl;
    }
    cout<<endl;
    return 0;
}