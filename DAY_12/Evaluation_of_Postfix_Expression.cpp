/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1 */

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> post;
        int n=S.length(),result;
        
        int value1,value2,v;
        for(int i=0;i<=n-1;i++)
        {
            if(S[i]!='*' && S[i]!='/' && S[i]!='+' && S[i]!='-')
            {
                v=S[i]-'0';
                
                post.push(v);
            }
            else
            {
                value1=post.top();
                post.pop();
                value2=post.top();
                post.pop();
                char ch=S[i];
                
                switch(ch)
                {
                    case '+': 
                             result=value2+value1;
                             post.push(result);
                             
                             break;
                    case '-':
                             result=value2-value1;
                             post.push(result);
                             
                             break;
                    case '*':
                             result=value2*value1;
                             post.push(result);
                             
                             break;
                    case '/':
                             result=value2/value1;
                             post.push(result);
                             
                             break;
                }
            }
        }
        return post.top();
    }
};