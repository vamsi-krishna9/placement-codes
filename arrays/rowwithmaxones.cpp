class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    vector<int> v;
	    int ret;
	    for(int i=0;i<n;i++)
	    {
	        int count=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                count++;
	            }
	        }
	        v.push_back(count);
	    }
	    int max = v[0];
	    for(int i=1;i<v.size();i++)
	    {
	        if(v[i]>max)
	        {
	            max = v[i];
	            ret = i;
	        }
	    }
	    if(max == 0)
	    {
	        return -1;
	    }
	    else
	    {
	    return ret;
	    }
	}

};
