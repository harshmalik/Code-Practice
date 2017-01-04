int Solution::removeDuplicates(vector<int> &A) {
    
    
    int i=0;
    int j=0;
    long count=0;
    int solution=0;
    if(A.size()==0 ||A.size()==1)
    return A.size();
    int k=0;
    for(int i=0;i<A.size();i++)
    {
        if(i<A.size()-1 && A[i]==A[i+1])
        {
            continue;
        }
        else{
            A[count]=A[i];
            count++;
        }
        
    }
    return count;
    /*
     while(i<A.size()&&j<A.size())
    {
        if(A[i]!=A[i+1])
        {
            i++;
            j++;
            
        }
        else{
            A.erase(A.begin()+j);
            
            //j++;
        }
        
    }
    return A.size();
    
    */
}
