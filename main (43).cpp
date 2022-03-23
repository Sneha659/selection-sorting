/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num[]= {12,9,37,86,2,17,5};
    int i,j,t,snp;

    cout<<"Array before Selection Sort"<<endl;
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }

    for(i=0; i<6; i++)
    {
        snp=i;
        for(j=i+1; j<7; j++)
        {
            if(num[j]<num[snp])
            {
                snp=j;
            }
        }
        if(num[i]>num[snp])
        {
            t=num[i];
            num[i]=num[snp];
            num[snp]=t;
        }
    }
    cout<<"\n\nArray after Selection Sort\n";
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}