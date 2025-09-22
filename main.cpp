#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "✅ C++ Compilation Test Successful!" << endl;

    // Work with numbers
    vector<int> nums = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int n : nums) sum += n;
    cout << "Sum of numbers {1,2,3,4,5} = " << sum << endl;

    // Work with strings
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "! Welcome to C++ on Termux + VS Code server 🚀" << endl;

    return 0;
}