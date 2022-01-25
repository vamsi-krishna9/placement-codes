    class Solution
    {
    public:
    void segregateElements(int arr[],int n)
    {
        int neg=0;
        int pos=0;
        int j=0;
        int i=0;
        int k=0;
        int *p = new int[n];
        for(int i=0;i<n;i++)
        {
            p[i]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        
        while(j<pos)
        {
            bool val = true;
            while(val)
            {
                if(p[i]>0)
                {
                    arr[j]=p[i];
                    val = false;
                }
                i++;
            }
            j++;
        }
        j=pos;
        while(j<pos+neg)
        {
            bool val1 = true;
            while(val1)
            {
                if(p[k]<0)
                {
                    arr[j]=p[k];
                    val1 = false;
                }
                k++;
            }
            j++;
        }
    }
};
