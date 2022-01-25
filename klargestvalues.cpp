class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> v;
	    priority_queue<int> pq;
	    for(int i=0;i<n;i++)
	    {
	        pq.push(-arr[i]);
	        if(pq.size()>k)
	        {
	            pq.pop();
	        }
	    }
	    for(int i=0;i<k;i++)
	    {
	        v.push_back(0);
	    }
	    for(int i=k-1;i>=0;i--)
	    {
	        v[i] = -(pq.top());
	        pq.pop();
	    }
	    return v;
	}

};
