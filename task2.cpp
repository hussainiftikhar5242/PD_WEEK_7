#include<iostream>
using namespace std;
void triangle();
main()
{
    triangle();
}
void triangle()
{
    int count;
    int ball=1;
    int count1=0;
    cout<<"enter  value:";
    cin >> count;
    for(int x=1; x <= count; x++)
    {
        count1=count1+ball;
        ball=ball+1;
        
    }
    cout<<"triangle:"<<count1;
}
