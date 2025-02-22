#include<iostream>
using namespace std;
int BinarySearch(int a[],int size,int key)
{
    //best case O(1) for first position of array
    //avg case O(logN) random position of array
    //worst case O(logN) last position of array
    //Only for sorted array


    int left = 0;//lower bound
    int right = size-1;//upper bound
    while(left<=right)//loop runs till left is less than or equal to right
    {
        int mid = (left+right)/2;//get the mid element
        
        //check key with mid elements
        if(a[mid]==key)//mid element equal to key
        {
            return mid;//return index
        }
        else if(a[mid]<key)//mid element is less than key 
        {
            left = mid+1;//increment left by mid+1
        }
        else
        {
            right = mid-1;//mid is greater then key so decrement right by mid-1
        }
    }
    return -1;//if not found return -1
}
int main()
{
    int size;//declaring size
    cout<<"Enter the size of array: ";
    cin>>size;//initializing size
    int sortedArr[size];//declaring sorted array
    cout<<"Enter the elements for Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cin>>sortedArr[i];//taking input
    }
    int key;//declaring key
    cout<<"Enter the key to search: ";
    cin>>key;//taking input of key
    int index = BinarySearch(sortedArr,size,key);//calling function to get index
    if(index==-1)//index cannot be -1
    {
        cout<<key<<"is not found";
    }
    else//valid index value
    {
        cout<<key<<" is found at index: "<<index;
    }
    return 0;

}