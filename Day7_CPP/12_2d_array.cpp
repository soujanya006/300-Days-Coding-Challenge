#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> myarray;
    int n;
    cout << "enter the max" << endl;
    cin >>n;
    cout <<"enter all the bits" << endl;
    for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        myarray.push_back(d);
    }

    cout <<"" << endl;
    //cout << myarray[0];
    cout <<"" << endl;


    for (int i = 0; i < myarray.size(); i++ ){
        cout << myarray[i] << " ";
    }

    cout <<"" << endl;






    int count1=0;
    for (int i = 0; i < myarray.size(); i++ ){
        if(myarray[i] == 1){
            count1=count1+1;
        }
    }
    cout <<"ones are " << count1 << endl;


    int countzero=0;
    for (int i = 0; i < myarray.size(); i++ ){
        if(myarray[i] == 0){
            countzero=countzero+1;
        }
    }
    cout <<"zeros are " << countzero << endl;




    return 0;
}
