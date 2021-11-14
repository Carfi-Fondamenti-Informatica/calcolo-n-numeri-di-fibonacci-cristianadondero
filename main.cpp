#include <iostream>
using namespace std;
int main() {
    int n=0, x=1, y=1, z=0;
    cin>>n;
    if(n>=2){
        cout<<x<<endl;
        for (int i=0;i<n-1;i++){
            x=y+z;
            z=y;
            y=x;
            cout<<x<<endl;
        }
    }else{
        cout<<"errore";
    }
    return 0;
}
