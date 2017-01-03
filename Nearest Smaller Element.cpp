vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> solution;
    stack<int > ins;
for(int i=0;i<A.size();i++)
{

    while((!ins.empty()) && (ins.top()>=A[i]))
    {
        ins.pop();
    }
    if(ins.empty())
    {
        solution.push_back(-1);
    }
    else{
        solution.push_back(ins.top());
        
    }
            ins.push(A[i]);

}
return solution;
}
