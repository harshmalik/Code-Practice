int Solution::nTriang(vector<int> &A) {
    sort(A.begin(),A.end());
    int i=0;
    int x,y,z;
    long long count=0;
    int j=0;
    int k=0;
    #define mod 1000000007;
    while(i<A.size()-2)
    {
        
        j=i+1;
        k=i+2;
        for(j=i+1;j<A.size();j++)
        {
            while(k<A.size()&& A[i]+A[j]>A[k])
            {
                k++;
                
            }
            count+=k-j-1;
            count=count%mod;
        }
        i++;
       
    }
    return (int) count;
    
}
