int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int start=0;
    int end=A.size();
    int mid=0;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(A[mid]==B)
        return mid;
        
        if(A[start]>A[mid]){
            if(B>A[start]|| B<A[mid])
            end=mid-1;
            else
            start=mid+1;
        }
        else if(A[start]<=B && A[mid]>=B){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    
    return -1;
    
}
