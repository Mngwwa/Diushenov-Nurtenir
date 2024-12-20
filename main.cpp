
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main() {
    int number [10];l

    cout << "Enter 10 integers for the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> number[i];
        double calculate_average(const int number [10] size_t count);
        int find_max(const in numbers[10],size_t count);

    }

}
while (true) {
    cout << "\nNumerical Statistics Tool" << endl;
    cout << "1. Calculate Average" << endl;
    cout << "2. Find Max Number" << endl;
    cout << "3. Exit" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << fixed << setprecision(1);
        cout <<  calculate_average(numbers, SIZE) << endl;

        cout << find_max(numbers, SIZE) << endl;

        cout << endl;

        cout<< endl;
    }
} while (choice != 3);
return 0;