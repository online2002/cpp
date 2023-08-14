#include<iostream>
using namespace std;
int main(){
    int a,max=0;
    for(int i=1;i<10;i++){
        cin>>a;
        if(a>max){
            max=a;
        }
    }
    cout<<"\nmax = "<<max;

    return 0;
}
