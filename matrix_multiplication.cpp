#include<iostream>
using namespace std;

int main(){
    int a[2][2],b[2][2],c[2][2];
    int n,i,j,k;

    cout<<"Enter elements for matrix-A"<<endl;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements for matrix-B"<<endl;
    for(i=0; i<2; i++){
       for(j=0; j<2; j++){
        cin>>b[i][j];
       }
    }
     for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
     cout<<"The product of the two matrices is: \n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout<<"\t"<<c[i][j];
        }
        cout<<"\n";
    }


}
