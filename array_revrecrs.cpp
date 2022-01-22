/*this program is to reverse an array using recursive function calls*/
#include<iostream>
#include<string>

using namespace std;

void rev_array(int arr[],int start,int end)
{
    int t;
    if(start>=end)
    {
        return;
    }
    t = arr[start];
    arr[start] = arr[end];
    arr[end] = t;
    start++;
    end--;
    rev_array(arr, start, end);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> *(arr+i);
    }
    rev_array(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout << *(arr+i) << endl;
    }
}
