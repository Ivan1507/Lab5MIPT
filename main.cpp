#include <iostream>

using namespace std;

int min_cost(int n,int price[]){
int cost[n+1];
cost[1]=price[1];
cost[2]=price[1]+price[2];
for(int i=3;i<=n;i++){
    cost[i]=std::min(cost[i-1],cost[i-2])+price[i];
}
cout<<"Min cost path=["<<endl;
int current=n;
cout<<current<<" ";
while(current!=1){
    if(cost[current-1]==cost[current]-price[current])
        current=current-1;
    else if(cost[current-2]==cost[current]-price[current])
        current=current-2;
    else throw -1;
    cout<<current<<" ";

}
cout<<"]\n";
return cost[n];
}
int main()
{
    int n;
    cin>>n;
    int price[101];
    for(int i=1;i<=n;i++){
        cin>>price[i];
    }
    cout<<min_cost(n,price);

}
