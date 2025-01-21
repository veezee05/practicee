#include<bits/stdc++.h>
using namespace std;

class Stack 
{
    queue < int > q; //declaring a queue
    public:
    void Push(int x)
    {
        int s = q.size(); //s will store the size of q
        q.push(x); //pushing an element x into q
        for (int i = 0; i < s; i++) //iterative loop
        {
            q.push(q.front()); //in this step, the front element of q would be pushed back into the queue
            q.pop(); //and in this step, the extra element at the front would be removed
        }
    }
    int Pop() //just a normal pop operation
    {
        int n = q.front(); //n will store the front value
        q.pop(); //front's value would be popped
        return n; //the front value, which was stored in n and later popped, would be printed
    }
    int Top()
    {
        return q.front();
    }

    int Size()
    {
        return q.size();
    }
};

int main()
{
    Stack s;
    s.Push(3);
    s.Push(2);
    s.Push(4);
    s.Push(1);
    cout << "Top of the stack: " << s.Top() << endl;
    cout << "Size of the stack before removing element: " << s.Size() << endl;
    cout << "The deleted element is: " << s.Pop() << endl;
    cout << "Top of the stack after removing element: " << s.Top() << endl;
    cout << "Size of the stack after removing element: " << s.Size();

    return 0;
}