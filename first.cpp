//printing numbers without using for loop

#include<iostream>
using namespace std;
void passing(int n)
{
    if(n>0)
    {
        cout<<n<<"\t";
        passing(n-1);
    }
}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    passing(n);
}