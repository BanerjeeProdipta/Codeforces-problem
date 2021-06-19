#include <iostream>

using namespace std;

int main()
{
    int n,counter=0;
    string m;
    cin>>n;

    for(int i=0; i<n;i++){
           cin>>m;
           if(m=="++X"||m=="X++"){
            counter++;
           }
           else{counter--;}
    }
cout<<counter;
    return 0;
}
