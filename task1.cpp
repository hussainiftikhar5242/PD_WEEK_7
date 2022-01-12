#include<iostream>
using namespace std;
void amplifier();//function prototype
main()//start of main
{
    
    amplifier();//calling to function

}//end of main
void amplifier()
{
    int num1=0;
    int num2=0;
    cout<<"enter lower bound:"<<endl;
    cin >> num1;
    cout<<"enter upper bound:"<<endl;
    cin >> num2;
    while(num1 <= num2)
    {
        
        if(num1%4 == 0)
        {
            int number=num1*10;
            cout<< number<<",";
        }
        else 
        cout<<num1<<",";
        num1++;
    }

}