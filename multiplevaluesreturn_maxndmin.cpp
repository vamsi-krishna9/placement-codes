#include <iostream>
using namespace std;

struct maxndmin
{
    int max;
    int min;
};
maxndmin solver(int arr[],int n)
{
    maxndmin sol;
	sol.min = arr[0];
    sol.max=arr[0];
	for(int i=1;i<n;i++)
	{
	    if(arr[i]>sol.max)
	    {
	        sol.max=arr[i+1];
	    }
	}
	for(int i=1;i<n;i++)
	{
	    if(arr[i]<sol.min)
	    {
	        sol.min = arr[i];
	    }
	}
	return sol;
}
int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	int min,max;
	for(int i=0;i<n;i++)
	{
	    cin >> *(arr+i);
	}
	maxndmin v;
	v = solver(arr,n);
	cout << "maximum element is: "<<v.max<<endl;
	cout << "minimum element is: "<<v.min<<endl;
	return 0;
}
