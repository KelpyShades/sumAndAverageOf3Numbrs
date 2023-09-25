#include <iostream>

using namespace std;

int main()
{
    //Declares all our values which will be used in the work
    int a,b,c,d,e,f,g;
    cout<< "@@@...Program To Find The Sum and Average Of Three Numbers...@@@\n" <<endl;
    //Accepts The Five values
    cout<<"Enter 1st Number:" <<endl;
    cin>>a;
    cout<<"Enter 2nd Number:" <<endl;
    cin>>b;
    cout<<"Enter 3rd Number:" <<endl;
    cin>>c;
    //Operations On the values
    f= a+b+c;
    g= f/3;
    //Displays the outcome
    cout<<"The Sum Of Your Numbers is:"<<f <<endl;
    cout<<"The Average Of Your Numbers is:"<<g <<endl;
    return 0;
}
