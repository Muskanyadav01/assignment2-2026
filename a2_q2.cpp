#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows you want to be printed"<<endl;
    cin >> n;
    
    //write your code here
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row+1; col++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
}
