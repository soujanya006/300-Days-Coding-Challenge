#include <iostream>
using namespace std;


int main() {

int n;
cin>>n;
cout<<"1"<<endl;
int row=1;
while (row<=n-1) {
    int col=2;
    cout<<"1 ";
    while(col<=row) {
        cout<<row<<" ";
        col=col+1;
    }
    cout<<"1 ";
    cout<<endl;
    row=row+1;


}

}