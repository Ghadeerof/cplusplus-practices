#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x , n;
    double z = 1;
    long long w;
    double y;

    cin>>x>>n;

    for(int i = 1; i <= n; i++){
        w = 1;
        y = pow(x,i);

        for(int j = 2; j <= i; j++){
            w = w * j;
        }

        double ans = y / w;
        z = z + ans;
    }
    cout<<"Z = "<< z <<endl;
    return 0;
}
