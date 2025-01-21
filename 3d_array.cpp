#include<iostream>
using namespace std;

class stack
{
    public:
        int arr[3][5][2];
        int count = 0;
        void insertion()
        {
        for(int i = 0; i<3; i++)
        {
            for(int j = 0; j<5; j++)
            {
                for(int k = 0; k<2; k++)
                {
                    arr[i][j][k] = count;
                    count++;
                }
            }
        }
        }

        void displaying()
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0;j<5; j++)
                {
                    for(int k=0; k<2; k++)
                    {
                        cout<<arr[i][j][k]<<",";
                        count++;
                    }
                    cout<<"\t";
                }
                cout<<endl;
            }
            cout<<endl;
        }
};

int main()
{
    stack s;
    s.insertion();
    s.displaying();

    return 0;
}