#include<bits/stdc++.h>
using namespace std;

class addition
{
public:
    void sum(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void sum(double a,double b)
    {
        cout<<a+b<<endl;
    }
    void sum(string a,string b)
    {
        cout<<a+b<<endl;
    }
};

class one
{
public:
    void show()
    {
        cout<<"Hello from derive class\n";
    }
};

class two:public one
{
public:
    void show()
    {
        cout<<"Hello from derive class\n";
    }
};

int main()
{
    addition A;
    A.sum(10,20);
    A.sum(5.5,6.7);
    A.sum("Happy"," End");

    one o;
    o.show();
    two t;
    t.show();

    return 0;
}
