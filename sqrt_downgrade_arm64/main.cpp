#include <iostream>
#include <iomanip>
#include "math.h"
#include "old_project.h"
using namespace std;


long double nmb,sqrt_nmb;
long double first_number;
int second_number;
int xlgg=-1;
int preci=-1;
float xlnk=-1;

int main(int argc,char** argv)
{
    old_project *oldp = new old_project();
    cout<<"1 for sqrting the after breaking the number by giving almost always the approximation result set of from 1.1 to 1.5 \n";
    cout<<"2 playing between two different lenghts and getting almost the same result. Extensions \n";
    int epilogi=-1;
    epilogi=stoi(argv[1]);
    if(epilogi==1){
        cout<<"\n";
        cout<<"how it works:\n";
        cout<<"for the number 2785 \n";
        cout<<"4 = lenght of the number\n";
        cout<<"then we automate th following inputs\n";
        cout<<"2000 700 80 and 5 \n";
        cout<<"then u wait for the results to appear\n";
        cout<<"enter the number : \n";
        cin>>nmb;
        cout<<"enter precision \n";
        cin>>preci;
        oldp->preci=preci;
        xlgg=oldp->lgth(nmb);
        cout<<"lenght is : " << xlgg <<"\n";
        oldp->xlg=xlgg;
        sqrt_nmb=sqrt(nmb);
        cout<<"main sqrt from math file is : " << sqrt_nmb <<"\n";
        oldp->epilogi_ena(sqrt_nmb,nmb);

        }
    if(epilogi==2){
       cout<<"\n";
       cout<<"how it works:\n";
       cout<<"we first take a number with digits lenght of 2 and we expose the square of \n";
       cout<<"we then increase the number of digits from 2 to 4 but we keep the first two digits the same \n";
       cout<<"we take the digits we watch the digits we play with the digits \n";
       cout<<"vale arithmo  px 27 [2 digits]: \n";
       first_number=stold(argv[2]);
       cout<<"enter the number of increase digits u want eg from 27 with 2 digits to 27XY with 2 more digits \n";
       cout<<"so u enter 2 \n";
       second_number=stoi(argv[3]);
       oldp->epilogi_deuteri(first_number,second_number);
    }
    return 0;
}
