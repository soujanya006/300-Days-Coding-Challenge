#include<iostream>
#include<vector>

using namespace std;


void print_vector(vector<int> v){
    int size = v.size();
    for (int i = 0 ; i < size; i++){
        //cout << v[i] << " ";
        cout<< v.at(i)<< " "; // same as above code
    }
}

int main(){
    vector<int> v;
    int n;
    cout <<"enter the number" << endl;
    cin>>n;
    cout<<"now the numbers"<< endl;
    for(int i = 0; i < n; i++){
        int d; 
        cin >> d; 
        v.push_back(d);
    }
    cout<<endl;
    print_vector(v);

    for (int i=0 ; i< 4; i++){
        v.push_back(50); //dynamic allocation
    }

    cout<<endl;


    print_vector(v);
    cout<<endl;

    v.clear();
    print_vector(v); //vector deleted 

    cout << " hello"<< endl;

    v.push_back(4); // new  vector started again , previous is deleted 
    print_vector(v);
    //cout<< v[0];



    return 0;
}