#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"enter number:";
    cin>>num;
    float percentage1=0;//minibus
    float percentage2=0;//truck percentage 
    float percentage3=0;//train  
    float msum=0;//minibus sum
    float sum1=0;//calculate minibus sum
    float  number=0;
    float tsum2=0;//truck sum // train sum
    float tsum=0;//truck sum
    float tasum=0;//truck sum
    float total_sum=0;//total sum
    for(int i=1;i<=num;i++)
    {
        cin>> number;
        if(number<=3)
        {
            msum=number;
            sum1=msum+sum1;   
        }
        if(number>3 && number<=11)
        {
            tsum=number;
            tsum2=tsum+tsum2;
        }
        if(number>11) 
        {
            tsum=number;
            tasum=tsum+tasum;   
        }
    }
    total_sum=sum1+tsum2+tasum;
    percentage2=(tsum2*100)/total_sum;
    percentage1=(sum1/total_sum)*100;
    percentage3=(tasum/total_sum)*100;
    cout<<"percentage of minibus :"<<percentage1<<endl;
    cout<<"percentage of truck :"<<percentage2<<endl;
    cout<<"percentage of train :"<<percentage3<<endl;
    float average_price=(sum1*200+tsum2*175+tasum*120)/total_sum;
    cout<<"average price per ton carried by:"<<average_price;
}