#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int n,k;
 cin>>n>>k;
 int A[n];
 int max=0;
 for(int i=0;i<n;i++){
    cin>>A[i];
 }
if(k>2){
    max=min(A[n-1]-A[n/2],A[n/2]-A[0]);
}
else max=A[n-1]-A[0];
cout<<max;

}


