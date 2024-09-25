#include<iostream>
using namespace std;

class Insert
{
    public:
        void sorting(int a[], int n)
        {
            for(int i = 1; i<n; i++) //loop to traverse till the end
            {
                int j = i-1; //initialize j as i-1
                int val = a[i]; //value is equal to the i'th value in the array a
                while(j>=0 && a[j]>val)
                {
                    a[j+1] = a[j];
                    j--;
                }
                a[j+1] = val;
            }
        }

        void display(int a[], int n)
        {
            cout<<"Sorted array is: ";
                for(int i = 0; i<n; i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
        }
};

int main()
{
    int a[] = {12, 11, 13, 5, 6};
    int n = sizeof(a)/sizeof(a[0]);
    Insert obj;
    obj.sorting(a, n);
    obj.display(a, n);

    return 0;
}