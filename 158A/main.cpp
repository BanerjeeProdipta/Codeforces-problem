#include <iostream>

using namespace std;

int main()
{
    int n,k,a[100],counter=0;

    cin>>n>>k;


for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int j=0;j<n;j++){
 if(a[j]>0 && a[j]>=a[k-1]){
    counter++;
 }
}

cout<<counter;
    return 0;
}
