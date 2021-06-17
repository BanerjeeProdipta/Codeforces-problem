#include <iostream>

using namespace std;

int main()
{
    int n,Petya, Vasya, Tonya;
    int counter=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>Petya>>Vasya >>Tonya;
        if(Petya+Vasya+Tonya>=2){
            counter++;
        }
    }
    cout<<counter;

    return 0;
}
