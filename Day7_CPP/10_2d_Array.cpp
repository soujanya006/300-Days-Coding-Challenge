#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/// @brief this a code for rotating right once, but 
/// only applicable for same number rows and cols, 
/// that is square matrix


void Print_Myvector(vector<vector<int>> &Myvector, int rows,int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << Myvector[i][j] <<  " ";
        }
        cout << endl;
    }

}
void Rotate_Myvector(vector<vector<int>> &Myvector, int rows,int cols){

    vector<vector<int>> Myvector_new(rows, vector<int> (cols));

    //transpose the matrix 
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){

            Myvector_new[i][j] = Myvector[j][i];
        }
    }
    // reverse the transpose matrix
    for (int i = 0; i < rows; i++){
        reverse(Myvector_new[i].begin(), Myvector_new[i].end());
    }

    cout << endl;

    // print the complete rotate matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << Myvector_new[i][j] <<  " ";
        }
        cout << endl;
    }
}

int main(){
    int rows,cols,temp;
    // Ask user for the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;


    vector<vector<int>> Myvector(rows, vector<int> (cols));

    // take the input to the matrix

    for(int i = 0; i < rows; i++){
        for(int j= 0; j< cols; j++){

            cout << "Enter element for row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> temp;
            Myvector[i][j]  = temp; 
        }
    }

    Print_Myvector(Myvector,rows,cols);
    Rotate_Myvector(Myvector,rows,cols);
    //Print_Myvector(Myvector,rows,cols);

    return 0;
}