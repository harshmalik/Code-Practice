int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    
    int x=0;
    int y=0;
    int z=0;
    int a=A.size();
    int b=B.size();
    int c=C.size();
    int result=INT_MAX;
    int maxtillnow=0;
    int minpointer=0;
    int diff;
      while(x<a && y<b && z<c)
{
    minpointer=min(A[x],min(B[y],C[z]));
    maxtillnow=max(A[x],max(B[y],C[z]));
    diff=maxtillnow-minpointer;
    if(diff<result)
    {
        result=diff;
    }
    
    if(minpointer==A[x])
    x++;
    else if(minpointer==B[y])
    y++;
    else
    z++;
}
    return result;
    
}
