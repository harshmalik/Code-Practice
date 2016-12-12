int Solution::sqrt(int A) {
    if(A==0)
    return 0;
    if(A==1)
    return 1;
   
   
   long long start =0;
   long long end =A;
   long long mid=0;
   long long sqr=0;
   long long ans=0;
   
   while(start<=end){
       mid=(start+end)/2;
       sqr=mid*mid;
       if(sqr==A)
       {
           return (int)mid;
           
       }
       else if(sqr<A)
       {
           start=mid+1;
           ans=mid;
       }
       else {
           end=mid-1;
       }
   }
   return (int)ans;
}
