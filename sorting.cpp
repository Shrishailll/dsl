#include <iostream>
using namespace std;

int main() {
    int n, choice, temp;

    // Get array size from user
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare array of given size

    // Get array elements from user
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menu for sorting options
    do {
        cout << "\n--- Sorting Menu ---" << endl;
        cout << "1. Sort in Ascending Order" << endl;
        cout << "2. Sort in Descending Order" << endl;
        cout << "3. Display Array" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Ascending Order using Bubble Sort
                for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            // Swap elements
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                cout << "\nArray sorted in ascending order." << endl;
                break;

            case 2: // Descending Order using Bubble Sort
                for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] < arr[j]) {
                            // Swap elements
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                cout << "\nArray sorted in descending order." << endl;
                break;

            case 3: // Display Array
                cout << "\nCurrent array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 4: // Exit
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}


