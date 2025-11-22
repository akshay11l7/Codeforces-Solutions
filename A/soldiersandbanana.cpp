#include <iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int totalcost=0;
    for (int i = 1; i <= w; i++)
    {
        int a=i*k;
        totalcost=totalcost+a;
    }
    cout<<max(0,totalcost-n);
    
    return 0;
}