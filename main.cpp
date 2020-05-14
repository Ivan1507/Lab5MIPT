#include <iostream>
using namespace std;
void sort(int A[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if(A[j]>A[j+1]){
            int t=A[j];
            A[j]=A[j+1];
            A[j+1]=t;
        }
    }
}
}
void sort_min(int A[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if(A[j]<A[j+1]){
            int t=A[j];
            A[j]=A[j+1];
            A[j+1]=t;
        }
    }
}
}
void print(int A[],int n){
for(int i=0;i<n;i++){
    cout<<A[i]<<'\t';
}
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    bool F[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]>0) F[i]=true;
        else F[i]=false;
    }
    for(int i=0;i<n-1;i++){
       for(int j=0;j<n-i-1;j++){
        if(A[j]<0&&A[j+1]<0){
                if(A[j]<A[j+1]){
                    int t=A[j];
            A[j]=A[j+1];
            A[j+1]=t;
            print(A,n);
            cout<<endl;
                }
            }
            else if(A[j]>0&&A[j+1]>0){
                if(A[j]>A[j+1]){
                    int t=A[j];
            A[j]=A[j+1];
            A[j+1]=t;
            print(A,n);
            cout<<endl;
       }
    }}
    }




}

