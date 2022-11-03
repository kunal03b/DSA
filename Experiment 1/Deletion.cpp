// Deletion in an array

#include <iostream>
using namespace std;
void deleteelement(int *arr, int &size, int pos)
{
    for (int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size = size - 1;
}

int main()
{
    int arr[10000] = {0};
    cout << "enter the size of array" << endl;
    int size;
    cin >> size;
    cout << "enter the array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "printing the array before the deletion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int position;
    cout << "enter the position" << endl;
    cin >> position;
    deleteelement(arr, size, position);
    cout << "printing the array after the deletion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
