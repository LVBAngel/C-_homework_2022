#include <iostream>
#include<cmath>

using namespace std;

int main()
{   double a,b,c,d,x1,x2;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    if ((a==0) && (b!=0) && (c!=0) ){
        cout<< "x="<<-(c/b);
        exit(0);
    }

    if ((a==0) && (b!=0) && (c==0) ){
        cout<< "x="<<"0";
        exit(0);
    }
    if ((a==0) && (b==0) && (c!=0) ){
        cout<< "0 solutions";
        exit(0);
    }
    if ((a==0) && (b==0) && (c==0) ){
        cout<< "Infinity";
        exit(0);
    }

    d=b*b-4*a*c;
    if (d<0){
        cout<< "0 solutions";
        exit(0);
    }
    if (d==0){
        if (b==0){cout<<"x=0";exit(0);}
        cout<< "x="<<-(b/2*a);
        exit(0);
    }
    if (d>0){
        cout<< "x1="<<(-b+sqrt(d))/2*a<<endl;
        cout<< "x2="<<(-b-sqrt(d))/2*a;
        exit(0);
    }


    return 0;
}

