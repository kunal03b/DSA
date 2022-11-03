// Insertion in an array

#include <iostream>
using namespace std;
void insertelement(int *arr, int element, int &size, int pos)
{
    size = size + 1;
    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
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
    cout << "printing the array before the insertion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter the element" << endl;
    int element;
    int position;
    cin >> element;
    cout << "enter the position" << endl;
    cin >> position;
    insertelement(arr, element, size, position);
    cout << "printing the array after the insertion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
