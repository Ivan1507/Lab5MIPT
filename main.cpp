 #include <iostream>
    using std::cin;
    using std::cout;
    using std::endl;

    void my_slightly_less_dumb_reallocation(int** source, unsigned int n_old, unsigned int n_new);

int main() {
    unsigned int n, i;
    cin >> n;
    int *a = NULL;
    my_slightly_less_dumb_reallocation(&a, 0, n / 2);
    for (i = 0; i < n / 2; i++)
        cin >> a[i];
    my_slightly_less_dumb_reallocation(&a, n / 2, n);
    for (; i < n; i++)
        cin >> a[i];
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    cout << sum << endl;
    my_slightly_less_dumb_reallocation(&a, n, n / 2);
    my_slightly_less_dumb_reallocation(&a, n / 2, 0);
    my_slightly_less_dumb_reallocation(&a, 0, 0);
    return 0;
}
void my_slightly_less_dumb_reallocation(int** source, unsigned int n_old, unsigned int n_new){
    if(!(*source==0)&&(n_old<n_new)){
       source=new int*[n_old];
       delete[] source;
       }
 delete[] source;
    if(!(source==0&&n_old==0&&n_new==0)&&(n_old<n_new)){
            int *nsource=new int[n_old];
        for(int i=0;i<=n_old;i++){
            source[i]=new int[n_old];
        }
    for(int i=0;i<=n_old;i++){
        nsource[i]=*source[i];
    }

    }

     for(int i=0;i<n_old;i++){
        delete source[i];
     }
    }
