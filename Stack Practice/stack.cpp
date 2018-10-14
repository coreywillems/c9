#include <iostream>
#include <stack>
#include <string>
using namespace std;

void output (string exp)
{
    stack < char >op;
    string s = "";

    for (int i = 0; i < exp.size(); i++)
    {
        if (isalpha (exp[i])) 
        {
            s = exp[i];
            cout << s;
            continue;
        }

        else if (!isalpha(exp[i]))
        {
            if (op.empty()) 
            {
                op.push(exp[i]);
            }
            
            else if (exp[i] == '-' || exp[i] == '+')
            {
                while (op.top() == '-' || op.top() == '+')
                {
                    cout << op.top();
                    op.pop();
                }
                while (op.top() == '*' || op.top() == '/')
                {
                    cout << op.top();
                    op.pop();
                }
                op.push (exp[i]);
            }
        
            else if (exp[i] == '*' || exp[i] == '/')
            {
                while (op.top() == '*' || op.top() == '/')
                {  
                    cout << op.top();
                    op.pop();
                }
                op.push(exp[i]);
            }
	    }
    }
    
    while (!op.empty())
    {
        cout<<op.top();
        op.pop();
    }
}

int main ()
{
  string exp = "a+b*c*d/p-s";

  output(exp);
  return 0;
}