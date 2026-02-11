#include <iostream>
using namespace std;

int main() {
    int n, choice, temp;

    
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; 
    
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

   
    do {
        cout << "\n--- Sorting Menu ---" << endl;
        cout << "1. Sort in Ascending Order" << endl;
        cout << "2. Sort in Descending Order" << endl;
        cout << "3. Display Array" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                cout << "\nArray sorted in ascending order." << endl;
                break;

            case 2:
                for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] < arr[j]) {
                            
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                cout << "\nArray sorted in descending order." << endl;
                break;

            case 3: 
                cout << "\nCurrent array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 4: 
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}


