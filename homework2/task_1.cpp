#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   int price,temp;
    bool cashback;
    string name;
    cout<<"Product's name: ";
    cin>>name;
    cout<<"Product's price: ";
    cin>>price;
    cout<<"Is cash-back available for this product? (true/false) ";
    cin>>boolalpha>>cashback;
    cout<<"Maximum storing temperature: ";
    cin>>temp;
    cout<<'\n';
    cout<<name<<endl;
    cout << setfill('.') << setw(18)<<left << "Price:"<< setfill('0') << setw(8)<<right<<uppercase << hex << price << endl;
    cout << setfill('.') << setw(22)<<left << "Has cash-back:"<< boolalpha<<cashback<< endl;
    cout << setfill('.') << setw(23)<<left << "Max temperature:"<< dec<<showpos<<temp<< endl;
    return 0;
}
