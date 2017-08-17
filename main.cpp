#include <iostream>
using namespace std;
void justdoit(int, int &);

int main()
{
    int p=5, q=0, r=2;

    justdoit(p,q);
    cout<<"in main: ";
    cout<<p<<"  "<< q << endl;

    p=3; q=2; r=1;
    justdoit(r,p);
    cout<<"again, in main:";
    cout<<endl << p << " " << q << " " << r << endl;
//hello

    return 0;
}
/*
in justdoit:9 7  6
in main: 5  7

in justdoit:20 19  -1
again, in main:
19 2 1

Process returned 0 (0x0)   execution time : 0.028 s
Press any key to continue.
*/




    void justdoit(int a, int &b)
{


    int c;
    c=a-b;
    c++;

    if (c<0){
        b=19;
        a=20;

    }

    else{
        b=7;
        a=9;


    }
    cout<< endl << "in justdoit:" ;
    cout << a << " " << b <<"  "<< c << endl;
    return;
}
