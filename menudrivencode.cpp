#include<iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], c[2][2];
    int x;
    char ch;

    do {
        cout << "\nMENU\n";
        cout << "1. Enter first matrix\n";
        cout << "2. Enter second matrix\n";
        cout << "3. Display matrices\n";
        cout << "4. Add matrices\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> x;

        switch(x) {

            case 1:
                for(int i=0;i<2;i++)
                    for(int j=0;j<2;j++)
                        cin >> a[i][j];
                break;

            case 2:
                for(int i=0;i<2;i++)
                    for(int j=0;j<2;j++)
                        cin >> b[i][j];
                break;

            case 3:
                for(int i=0;i<2;i++) {
                    for(int j=0;j<2;j++)
                        cout << a[i][j] << " ";
                    cout << endl;
                }
                cout << endl;
                for(int i=0;i<2;i++) {
                    for(int j=0;j<2;j++)
                        cout << b[i][j] << " ";
                    cout << endl;
                }
                break;

            case 4:
                for(int i=0;i<2;i++)
                    for(int j=0;j<2;j++)
                        c[i][j] = a[i][j] + b[i][j];

                for(int i=0;i<2;i++) {
                    for(int j=0;j<2;j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                }
                break;
             case 6:
                for(int i=0;i<2;i++)
                    for(int j=0;j<2;j++)
                        c[i][j] = a[i][j] - b[i][j];

                for(int i=0;i<2;i++) {
                    for(int j=0;j<2;j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                    break;
                }
            case 7:
                for(int i=0;i<2;i++)
                    for(int j=0;j<2;j++)
                        cout<<a[j][i];
                        break;

                
            case 8:
                return 0;

            default:
                cout << "Invalid choice\n";
        }

        cout << "\nDo you want to continue (y/n): ";
        cin >> ch;

    } while(ch == 'y' || ch == 'Y');

    return 0;
}
