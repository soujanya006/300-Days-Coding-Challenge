#include<iostream>
#include<vector>
#include <algorithm>

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

void test_vector(vector<int>& vector_1){
    cout << vector_1[0] << endl;
    cout << vector_1[2] << endl;
}


void rever_vector(vector<int>& vector_1){


    // Reverse the vector
    reverse(vector_1.begin(), vector_1.end());

    //cout << "size is " << vector_1.size();
    // int left = 0;
    // int right = (vector_1.size()) - 1;
    // while(left <= right){
    //     swap(vector_1[left], vector_1[right]);
    //     left++ ;
    //     right-- ;
    // }
}

void print_rever(vector<int>& vector_1){

    cout << "reversed vector is" << endl;
    for (int i = 0; i < vector_1.size(); i++){
        cout << vector_1[i] << " ";
    }
}

int main(){

    vector<int> vector_1;

    // vector_1.push_back(12);
    // cout << vector_1[0] << endl;

    print_vector(vector_1);
    cout<< endl;
    // vector_1[0] =9;   
    // cout << vector_1[0] << endl;


    //test_vector(vector_1);

    rever_vector(vector_1);

    print_rever(vector_1);
    
    return 0;
}