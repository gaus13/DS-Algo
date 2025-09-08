#include <iostream>
using namespace std;

// Function to print the sum of each row
void printrowSum(int arr[][3]) {
    cout << "Printing the sum of each row:" << endl;
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << " = " << sum << endl;
    }
    cout << endl;
}

// Function to return the index of the row with the largest sum
int largestRowSum(int arr[][3]) {
    int maxi = INT32_MIN;
    int rowIndex = -1;

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }

        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }

    cout << "The maximum row sum is: " << maxi << endl;
    return rowIndex;
}

int main() {
    int arr[3][3];

    cout << "Enter the elements of the 3x3 array:" << endl;

    // Input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the array
    cout << "\nThe array is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Print row sums
    printrowSum(arr);

    // Get row index with the largest sum
    int ansIndex = largestRowSum(arr);
    cout << "Row with max sum is at index: " << ansIndex << endl;

    return 0;
}
