#include <iostream>
using namespace std;
void change(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}
int main()
{
    int num[5] = {1, 5, 2, 6, 3};
    change(num, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }
    cout<<endl;
    return 0;
}