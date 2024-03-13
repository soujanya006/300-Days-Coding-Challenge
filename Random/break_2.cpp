#include <iostream>
#include <cmath>
using namespace std;

int main() {



double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;


    while (true) {
        int choice;

        cout << "1. Option Addition" << endl;
        cout << "2. Option Subtraction" << endl;
        cout << "3. Option Multiplication" << endl;
        cout << "4. Option Division" << endl;
        cout << "5. Option Exponential" << endl;
        cout << "6. Option Log" << endl;
        cout << "7. Option Sine" << endl;
        cout << "8. Option Cosine" << endl;

        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
                case 1:{
                    cout << "You selected Addition" << endl;
                    cout <<num1+num2<< endl;
                    cout << endl;
                        }       
                    break;
                case 2:{
                    cout << "You selected Subtraction" << endl;
                    cout <<num1-num2<< endl;
                    cout << endl;
                        }
                    break;
                case 3:{
                    cout << "You selected Multiplication" << endl;
                    cout <<num1*num2<< endl;
                    cout << endl;
                        }
                    break;

                 case 4:{
                    cout << "You selected Division" << endl;
                    cout <<num1/num2<< endl;
                    cout << endl;
                        }
                    break; 

                case 5:{
                    cout << "You selected Exponential" << endl;
                    cout <<exp(num1) << endl;
                    cout <<exp(num2) << endl;
                    cout << endl;
                        }
                    break;

                case 6:{
                    cout << "You selected Log" << endl;
                    cout <<log(num1)<< endl;
                    cout <<log(num2)<< endl;
                    cout << endl;
                        }
                    break;
                
                case 7:{
                    cout << "You selected Sine" << endl;
                    cout <<sin(num1) << endl;
                    cout <<sin(num2) << endl;
                    cout << endl;
                        }
                    break;
                
                case 8:{
                    cout << "You selected Cosine" << endl;
                    cout <<cos(num1) << endl;
                    cout <<cos(num2) << endl;
                    cout << endl;
                        }
                    break;

                case 9:
                    cout << "Exiting the program..." << endl;
                    exit(0);

                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
        }
    }

    return 0;
}

