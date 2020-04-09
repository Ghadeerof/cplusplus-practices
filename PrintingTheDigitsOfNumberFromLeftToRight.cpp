#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n , n1, count = 0;
    cin>>n;
    n1 = n;

    while(n1 > 0){
        n1 = n1 / 10;
        count++;
    }

    int i = --count;

    while(n > 0){

        double p = pow(10,i);

        cout<<n / (int) p<<endl;

        n = n % (int) p;

        i--;
    }

    return 0;
}
