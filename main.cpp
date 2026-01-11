#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;

    string subject[10];
    int hours[10];

    for (int i = 0; i < n; i++) {
        cout << "Enter subject name " << i + 1 << ": ";
        cin >> subject[i];

        cout << "Enter weekly hours for " << subject[i] << ": ";
        cin >> hours[i];
    }

    cout << "\nSubject Details:\n";
    for (int i = 0; i < n; i++) {
        cout << subject[i] << " -> " << hours[i] << " hours/week\n";
    }

    return 0;
}