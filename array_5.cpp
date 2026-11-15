#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    const int size = 7;
    int arr[size] = {4, 2, 7, 8, 1, 2, 5};
    cout << "Before Swap :- \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
    reverseArray(arr, size);
    cout << "After Swap :- \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
    cout<<endl;
    return 0;
}