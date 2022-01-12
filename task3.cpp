#include<iostream>
using namespace std;
main()
{
    int period;
    cout<<"enter period:";
    cin >> period;
    int untreat_patient=0;
    int traeat=0;
    int patient=0;
    int doctor=7;

    for(int i=1; i<=period;i++ )
    {
        
        cout<<"enter patient value:";
        cin>>patient;
        if((i%3==0) && (untreat_patient > traeat))
        {
            doctor=doctor+1;
        }
        if(patient>doctor)
        {
            traeat=traeat+doctor;
            untreat_patient=untreat_patient+(patient-doctor);
        }
        else 
        {
            traeat=traeat+patient;
        }
    }
    cout<<"treated patient are:"<<traeat<<endl;
    cout<<"untreated are:"<<untreat_patient<<endl;
}