char * removeOuterParentheses(char * S){
    char *str;
    int len = strlen(S);
    int cnt, index;
    str = (char *)malloc(sizeof(char) * len);
    
    cnt = 0;
    index = 0;
    for(int i = 0; i < len; i++)
    {
        if (S[i]=='(')  //start
        {
            cnt++;
            if (cnt != 1) // 1 < cnt
                str[index++] = S[i];
        }
        else
        {
            cnt--; // ')'
            if(cnt != 0)
                str[index++] = S[i];
        }
    }
    
    str[index] = NULL;
    
    return str;
}
