#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is even or odd
<<<<<<< HEAD
    if (num % 8 == 0) {
=======
    if (num % 10 == 0) {
>>>>>>> feature/feature-branch
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}

