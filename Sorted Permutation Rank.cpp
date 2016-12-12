long fact(long x)
{
    if(x==0 || x==1)
    return 1;
    return x*fact(x-1)%1000003;
}
int Solution::findRank(string A) {
    string copy=A;
    sort(A.begin(),A.end());
    long counter=0;
    int j=0;
    long rank=0;
    long m=A.length();
    long l=A.length();
    int i=0;
    while(j<m)
    {
    for(i=0;i<l;i++)
    {
        if(copy[j]>A[i])
        {
            counter++;
        }
        else{
            break;
        }
    }
        rank+=(counter%1000003)*(fact(A.length()-1)%1000003);
        rank=rank%1000003;
        A.erase(A.begin()+i-1);
        counter=0;
l=A.length();
j++;
    }
    
    return (int)rank+1;
    
}
