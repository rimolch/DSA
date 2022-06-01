#include<bits/stdc++.h>

using namespace std;
#define Max_value 20
#define Set_value -1
int mem[Max_value + 1];
int fib(int n)
{
    if(n==0||n==1)return 1;
    if(mem[n]!=-1)return mem[n];
    mem[n]=fib(n-1)+fib(n-1);
    return mem[n];
}
int main()
{
    for(int i=0;i<=Max_value;i++)
    {
        mem[i]=Set_value;
    }
    cout<<fib(Max_value);
}
