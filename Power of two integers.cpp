bool Solution::isPower(int A) {
    //vector<int> factor;
    if(A<0)
    A=A*(-1);
    if(A==1)
    return 1;
   /* for(int i=1;i<A;i++)
    {
        if(A%i==0)
        factor.push_back(i);
    }
    */
    int m=1;
    double checkInt=0.0;
    //int size=factor.size();
    int sqrtn=sqrt(A);
    while(m<=sqrtn)
    {
        checkInt= log10 (A)/log10 (m);
        if(floor(checkInt)-checkInt==0)
        {
            return 1;
        }
        m++;
    }
    return 0;
    
}
