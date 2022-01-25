class solution
{
  public:
    void sort012(int arr[], int n)
    {
        int one=0;
        int zero = 0;
        int two = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                zero++;
            }
            else if(arr[i]==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        for(int i=0;i<zero;i++)
        {
            arr[i]=0;
        }
        for(int i=zero;i<zero+one;i++)
        {
            arr[i]=1;
        }
        for(int i=zero+one;i<zero+one+two;i++)
        {
            arr[i]=2;
        }
    }
    };
};
