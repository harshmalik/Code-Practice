char returnChar (int x)
{
    switch (x)
    {
        case 1: return 'A';
        break;
        case 2: return 'B';
        break;
        case 3: return 'C';
        break;
        case 4: return 'D';
        break;
        case 5: return 'E';
        break;
        case 6: return 'F';
        break;
        case 7: return 'G';
        break;
        case 8: return 'H';
        break;
        case 9: return 'I';
        break;
        case 10: return 'J';
        break;
        case 11: return 'K';
        break;
        case 12: return 'L';
        break;
        case 13: return 'M';
        break;
        case 14: return 'N';
        break;
        case 15: return 'O';
        break;
        case 16: return 'P';
        break;
        case 17: return 'Q';
        break;
        case 18: return 'R';
        break;
        case 19: return 'S';
        break;
        case 20: return 'T';
        break;
        case 21: return 'U';
        break;
        case 22: return 'V';
        break;
        case 23: return 'W';
        break;
        case 24: return 'X';
        break;
        case 25: return 'Y';
        break;
        case 0: return 'Z';
        break;
        default: 
        return 'a';
    }
}
string Solution::convertToTitle(int A) {
    stack <char> store;
        int mod=0;
    string ans="";
    string ans1;
    while(A>=1)
    {
        char c;
        mod=A%26;
        c=returnChar(mod);
        ans1+=c;
        store.push(c);
        A=A/26;
        if (mod==0)
        A=A-1;
    }
    int m=store.size();
    char n;
    for(int i=0;i<m;i++)
    {  n=store.top();
        ans+=n;
        store.pop();
    }
    return ans;
}
