#include <iostream>
#include <stack>
#include <string>
using namespace std;

string stream = "";
stack<char> ops;
stack<int> nums;

void postfix(string exp)
{
    for (int i = 0; i < exp.size(); i++)
    {
        if (isalpha(exp[i]))
        {
            stream = exp[i];
            cout << stream;
            continue;
        }

        else if (!isalpha(exp[i]))
        {
            if (ops.empty())
            {
                ops.push(exp[i]);
            }

            else if (exp[i] == '+' || exp[i] == '-')
            {
                while (ops.top() == '*' || ops.top() == '/')
                {
                    cout << ops.top();
                    ops.pop();
                }
                ops.push(exp[i]);
            }

            else if (exp[i] == '+' || exp[i] == '-')
            {
                while (ops.top() == '+' || ops.top() == '-')
                {
                    cout << ops.top();
                    ops.pop();
                }
                ops.push(exp[i]);
            }
            else if (exp[i] == '*' || exp[i] == '/')
            {
                while (ops.top() == '*' || ops.top() == '/')
                {
                    cout << ops.top();
                    ops.pop();
                }
                ops.push(exp[i]);
            }
        }
    }

    while (!ops.empty())
    {
        cout << ops.top();
        ops.pop();
    }
}

void infix(string exp)
{
    cout << endl;

    for (int i = 0; i < exp.size(); i++)
    {
        if (isdigit(exp[i]) && nums.empty())
        {
            nums.push(exp[i]);
            continue;
        }

        else if (isdigit(exp[i]) && !nums.empty())
        {
            while (isdigit(nums.top()))
            {
                nums.pop();
            }
            nums.push(exp[i]);
        }

        else if (exp[i] == '(')
        {
            continue;
        }

        else if (exp[i] == '+' || exp[i] == '-')
        {
            while (ops.top() == '+' || ops.top() == '-')
            {
                ops.pop();
            }
            ops.push(exp[i]);
        }

        else if (exp[i] == '*' || exp[i] == '/')
        {
            while (ops.top() == '*' || ops.top() == '/')
            {
                ops.pop();
            }
            ops.push(exp[i]);
        }

        else if (exp[i] == ')')
        {
            ops.pop();
        }
    }
}

int main()
{
    postfix("a+b*c/d-e/e/d+t");
    // infix("1+(2+3)*4");

    return 0;
}