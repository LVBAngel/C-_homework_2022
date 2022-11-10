#include <iostream>

using namespace std;

int main()
{   int a;
    double number;
    cout<<"newton -> dyn: press 1"<<endl;
    cout<<"joule -> erg: press 2"<<endl;
    cout<<"tesla -> gauss: press 3"<<endl;
    cin>>a;
    cout<<"Give the number: ";
    cin>>number;
    int newton_to_dyn=1e5;
    int joule_to_erg=1e7;
    int tesla_to_gauss=1e4;
    switch (a) {
    case 1:
        cout<<number*newton_to_dyn;
        break;
    case 2:
        cout<<number*joule_to_erg;
        break;
    case 3:
        cout<<number*tesla_to_gauss;
        break;
    default:
        cout<<"Bye";
    }
    return 0;
}
