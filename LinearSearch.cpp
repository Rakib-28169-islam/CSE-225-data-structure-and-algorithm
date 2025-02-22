#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key)
{
    // best case O(1) for first position of array
    // avg case O(n/2) ~ O(n) random position of array
    // worst case O(n) last position of array
    // Both for sorted and unsorted array

    for (int i = 0; i < size; i++) // traversing array from 0 -> size
    {
        if (arr[i] == key) // key element found at i index of arr array
        {
            return i; // return index
        }
    }
    return -1; // if not found return -1
}
int main()
{

    // for sorted array
    int size1; // declaring size1
    cout << "Enter size of sorted array: ";
    cin >> size1;         // initializing size
    int sortedArr[size1]; // declaring sorted array
    cout << "Enter sorted array: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> sortedArr[i]; // taking input of sorted array
    }
    int key1; // declaring key1
    cout << "Enter key to search from sorted array: ";
    cin >> key1; // taking input of key1

    // for unsorted array
    int size2;
    cout << "Enter size of unsorted array: ";
    cin >> size2;
    int unsortedArr[size2]; // initializing unsorted array
    cout << "Enter unsorted array: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> unsortedArr[i]; // taking input of unsorted array
    }
    int key2;
    cout << "Enter key to search from unsorted array: ";
    cin >> key2;

    // call LinearSearch Function to find the index of the array
    int index1 = LinearSearch(sortedArr, size1, key1);
    int index2 = LinearSearch(unsortedArr, size2, key2);

    // for sorted array
    if (index1 != -1) // index can't be -1 so it find the index
    {
        cout << key1 << " found at index " << index1 << endl;
    }
    else
    {
        cout << key1 << " not found" << endl;
    }

    // for unsorted array
    if (index2 != -1) // index can't be -1 so it find it
    {
        cout << key2 << " Element found at index " << index2 << endl;
    }
    else
    {
        cout << key2 << " not found" << endl;
    }
    return 0;
}