#include<iostream>
#include<vector>

using namespace std;

void print_vector(vector<int>& vector_1){
    int n;
    cout << "Max numbers to be reversed:" << endl;
    cin >> n;

    for(int i = 0; i < n ; i++){
        cout << "print the number :" << i << endl;
        int d;
        cin >> d;
        vector_1.push_back(d);
    }
    cout << "the un-reversed numbers are" << endl;
    for (int i = 0; i < n; i++){
        cout << vector_1[i] << " ";
    }
}


int main(){

    vector<int> vector_1;

    // vector_1.push_back(12);
    // cout << vector_1[0] << endl;

    print_vector(vector_1);
    cout<< endl;
    vector_1[0] =9;   
    cout << vector_1[0] << endl;
    
    return 0;
}