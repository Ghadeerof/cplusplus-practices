#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int first = 0, second = 1, s;
    cout<<first<< " " << second;
    n = n - 2;

    while(n --){

        s = first + second;
        cout<<" "<<s;

        first = second;
        second = s;
    }

    return 0;
}
