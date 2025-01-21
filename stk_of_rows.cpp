#include<iostream>
using namespace std;

#define Max 100

class Stack
{
    int arr[Max];
    int top;

    public:
        Stack()
        {
            top = -1;
        }

        void insertion(int val)
        {
            if(top==-1)
            {
                return;
            }
            else if(top>=Max - 1)
            {
                cout<<"Stack overflow"<<endl;
                return;
            }
            arr[++top] = val;
            cout<< val << "pushed to the stack"<<endl;
        }

        int pop()
        {
            if(top == -1)
            {
                cout<<"Stack underflow"<<endl;
                return -1;
            }

            return arr[top--];
        }

        int peek()
        {
            if(top == -1)
            {
                cout<<"Stack is empty"<<endl;
                return -1;
            }

            return arr[top];
        }
};

int main()
{
    Stack s;
    s.insertion(10);
    s.insertion(20);
    s.insertion(30);
    s.insertion(40);

    cout<<"Popping one element: "<<s.pop();

    cout<<"Peeking into the stack: "<<s.peek();

    return 0;
}