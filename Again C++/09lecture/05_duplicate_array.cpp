#include<iostream>
using namespace std;
int main()
{
    int arr[4] ={1,3,3,1};
    int count[4] = {0};

    for(int i=0;i<4;i++)
    {
        int index =arr[i];
        count[index]++;
    }
    for(int i=0;i<4;i++)
    {
        if(count[i]>1)
        cout<<i<<" ";
    }
    return 0;
}