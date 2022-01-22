#include <iostream>
using namespace std;

int main() {
    int n;
    int t;
    int start,end;
    cin >> n;
	int* arr = new int[n];
	start =0;
	end = n-1;
	for(int i=0;i<n;i++)
	{
	    cin >> *(arr+i);
	}
	for(int i=0;i<n;i++)
	{
	    cout << *(arr+i)<<" ";
	}
	while(start<end)
	{
	    t = arr[start];
	    arr[start] = arr[end];
	    arr[end] = t;
	    start++;
	    end--;
	}
		for(int i=0;i<n;i++)
	{
	    cout << *(arr+i)<<" ";
	}
}
