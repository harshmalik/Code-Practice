int gcd ( int a, int b )
{
  if ( a==0 ) return b;
  return gcd ( b%a, a );
}
int Solution::cpFact(int A, int B) {
vector<int> factor;
    
    if (A==B)
    return 1;
    if(gcd(A,B)==1)
    return A;
    while(gcd(A,B)!=1)
    A=A/gcd(A,B);
    
    return A;
	/*
    factor.push_back(1);
    int flag=0;
    if(B%2==0)
    flag=1;
    for(int i=2;i<=A;i++)
    {
        if(A%i==0 && B%i !=0)
        {                                                  // TLE WITH THIS APPROACH
            if(flag==1)
        { if(i%2!=0)
        factor.push_back(i);
            }
            else{
                        factor.push_back(i);

            }
        }
    }
    
    int m=factor.size();
    int i=m-1;
    while(i>=0)
    {
        if(gcd(B, factor[i])==1)
        {
            return factor[i];
        }
        i--;
    }
    */
}
