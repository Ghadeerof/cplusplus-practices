#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int sumX = 0,sumY = 0;

    for(int x = 1; x < n; x++){
        sumX = 0;

        //divisors of x
        for(int i = 1; i <= x/2; i++){
            if(x % i == 0){
                sumX = sumX + i;
            }
        }

        for(int y = x + 1; y <= n; y++){
            sumY = 0;
            //divisors of y
            for(int i = 1; i <= y/2; i++){
                if(y % i == 0){
                    sumY = sumY + i;
                }
            }

            if(x == sumY && y == sumX){
                cout<<x<<" is friendly with "<<y<<endl;
            }
        }//end inner for
    }//end outer for

    return 0;
}
