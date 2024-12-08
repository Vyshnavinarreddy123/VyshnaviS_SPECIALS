//printing numbers in ascending order without using for loop

#include<iostream>
using namespace std;
void prinnting(int present,int n)
{
    if(n>0)
    {
        
        present+=1;
        cout<<present<<"\t";
        prinnting(present,n-1);
       
    }
}
int main()
{int n;
    cout<<"enter n";
    cin>>n;
    prinnting(0,n);
}