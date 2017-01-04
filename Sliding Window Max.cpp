vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> result;
    deque<int> Qi;
    
   int i;
    int n =A.size();
    for (i = 0; i < B; ++i)
    {
        while ( (!Qi.empty()) && A[i] >= A[Qi.back()])
            Qi.pop_back();  // Remove from rear
 
        // Add new element at rear of queue
        Qi.push_back(i);
    }
 
    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for ( ; i < n; ++i)
    {
        // The element at the front of the queue is the largest element of
        // previous window, so print it
        result.push_back(A[Qi.front()]);
 
        // Remove the elements which are out of this window
        while ( (!Qi.empty()) && Qi.front() <= i - B)
            Qi.pop_front();  // Remove from front of queue
 
        // Remove all elements smaller than the currently
        // being added element (remove useless elements)
        while ( (!Qi.empty()) && A[i] >= A[Qi.back()])
            Qi.pop_back();
 
         // Add current element at the rear of Qi
        Qi.push_back(i);
    }
 
    // Print the maximum element of last window
    result.push_back(A[Qi.front()]);

    
    
    
    return result;
    
}
