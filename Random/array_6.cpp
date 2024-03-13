#include <iostream>
using namespace std;

void PrintArray(char ch1[],int size){

    for (int i=0;i<size;i++){

        cout<<ch1[i]<<endl;
    }
}


int main(){

    char ch[3]={'q','r','w'};

    PrintArray(ch, 3);

}