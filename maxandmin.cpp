#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	int min,max;
	for(int i=0;i<n;i++)
	{
	    cin >> *(arr+i);
	}
		min = arr[0];
     	max=arr[0];
	for(int i=1;i<n;i++)
	{
	    if(arr[i]>max)
	    {
	        max=arr[i+1];
	    }
	}
	for(int i=1;i<n;i++)
	{
	    if(arr[i]<min)
	    {
	        min = arr[i];
	    }
	}
	cout << "maximum element is: "<<max<<endl;
	cout << "minimum element is: "<<min<<endl;
	return 0;
}
