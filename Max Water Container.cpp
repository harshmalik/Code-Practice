int Solution::maxArea(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   int n=A.size();
    int p=0,q=n-1;
    int maxA=0;
    while(p<q){
        maxA=max(maxA,(min(A[p],A[q])*(q-p)));
        if(A[p]<A[q])
            p++;
        else q--;
    }
    return maxA;
}
