#include <iostream>

using namespace std;
void cone(int n){
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=2*n-1;j=j+1){
            if(j>=n-(i-1)&&j<=n+(i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}
void tronc(int h,int n,int c){
    int nbspace=((c*2-1)-n)/2;
     for(int i=1;i<=h;i=i+1){
        for(int j=1;j<=nbspace;j=j+1){
            cout<<" ";
        }
        for(int j=1;j<=n;j=j+1){
            cout<<"|";
        }
        cout<<"\n";
    }

}


int main()
{
    cone(6);
    tronc(2,3,6);
    return 0;
}
