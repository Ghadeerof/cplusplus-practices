#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int sumI;

    for(int i = 1; i <= n; i++){
        sumI = 0;

        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sumI = sumI + j;
            }
        }//end inner loop

        if(i == sumI){
            cout<<i<<" "<<endl;
        }
    }
    return 0;
}
