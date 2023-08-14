#include<bits/stdc++.h>
using namespace std;
int main(){
    //declaring pair 
    //datatype couuld be anything also containers...
    pair<int,string> p[3];
    p[0]={1,"x"};
    p[1]={2,"y"};
    p[2]={3,"z"};
    //in built swap function
    //swap(p[0],p[2]);
    for(int i = 0;i<3;i++){
        cout<<p[i].first<<p[i].second<<endl;
    }
    return 0;
}
