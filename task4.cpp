#include<iostream>
using namespace std;
void count();
main()
{
    count();
}
void count()
{
    int n1=1,n2;
    cout<<"enter last number:"<<endl;
    cin >> n2;
    float count1=0;
    float count2=0;
    float count3=0;
    while(n1 <= n2)
    {
        int number;
        cout<<"enter number:"<<endl;
        cin >> number;
        if(number % 2 == 0 )
        {
            count1 ++;
        }
        if(number % 3 == 0 )
        {
            count2 ++;
        }
        if(number % 4 == 0 )
        {
            count3 ++;
        }
        n1++;
    }
    cout<<"number that is divisible by 2 are: "<<count1<<endl;
    float p1=(count1 / 10)*100;
    cout<<"percentage:"<<p1<<endl;
    cout<<"number that is divisible by 3 are: "<<count2<<endl;
    float p2=(count2 / 10)*100;
    cout<<"percentage:"<<p2<<endl;
    cout<<"number that is divisible by 4 are: "<<count3<<endl;
    float p3=(count3 / 10)*100;
    cout<<"percentage:"<<p3<<endl;
    
    
}