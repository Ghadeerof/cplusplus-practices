#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of products : "<<endl;
    cin>>n;

    double units,price,partialPrice , totalPrice = 0;

    for(int i = 0; i < n; i++){
        cout<<"Enter Units #" <<(i+1)<<endl;
        cin>>units;

        cout<<"Enter Price #" <<(i+1)<<endl;
        cin>>price;

        partialPrice = units * price;
        cout<<"Partial Price = "<<partialPrice<<endl;

        totalPrice = totalPrice + partialPrice;
    }
    cout<<"Total Price : "<<totalPrice<<endl;
    return 0;
}
