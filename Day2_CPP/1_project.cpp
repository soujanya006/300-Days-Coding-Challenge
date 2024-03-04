#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Character set including lowercase, uppercase, digits, and special characters
    const string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";

    // Length of the password
    const int passwordLength = 16;
    
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    string password;

    // Generate password
    for (int i = 0; i < passwordLength; ++i) {
        int randomIndex = rand() % chars.length(); // Random index
        password += chars[randomIndex]; // Append character at randomIndex to password
    }

    // Output the generated password
    cout << "Generated Password: " << password << endl;

    return 0;
}
