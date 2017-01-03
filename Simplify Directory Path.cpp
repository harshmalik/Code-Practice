string strreverse(string s)
{
    string result;
    string str;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='/')
        str+=s[i];
        else{
            result.insert(0,str);
            str="";
            result.insert(0,"/");
        }
        
    }
    return result;
    
}
string Solution::simplifyPath(string A) {
    
   stack <string> path;
    char spath[A.length()+1];
    //strcpy(spath,A.c_str());
    string s1;
    string s2;
    //s1+="/";
    for(int i=0;i<A.length();i++)
    {
        if(A[i]!='/' && A[i]!='.')
        {
            s2+=A[i];
        }
        else{
            if(A[i]=='/' && s2.length()!=0)
            {
                path.push(s2);
                s2="";
            }
            else if(A[i]=='.' && i!=A.length()-1 && A[i+1]=='.')
            {
                s2="";
                if(!path.empty())
                path.pop();
            }
            else {
                s2="";
            }
            
        }
    }
    if(s2.length()!=0)
    path.push(s2);
        while (!path.empty()){
        s1+=path.top();
        path.pop();
            s1+='/';
        }
    
    //    s1+='/';
        //cout<<s1;
        string result= strreverse(s1);
        
        if(result.length()==0)
        result='/';
 return result;
    
    
}
