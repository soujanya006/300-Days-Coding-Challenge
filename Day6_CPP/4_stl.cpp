#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> v){
    int size = v.size();
    for (int i = 0 ; i < size; i++){
        cout << v[i] << " ";
    }
}

int main (){

    vector<int>v;

    v.push_back(66);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(16);
    v.push_back(14);

    print_vector(v);
    cout << endl;

    v.pop_back();
    print_vector(v);
    cout << endl;


    v.pop_back();
    print_vector(v);
    cout << endl;


    v.pop_back();
    print_vector(v);
    cout << endl;




    return 0;
}