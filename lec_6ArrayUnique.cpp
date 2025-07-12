#include <iostream>
using namespace std;
void printUniqueValues(const int arr[], int size) {
    bool isUnique;

    for (int i = 0; i < size; ++i) {
        isUnique = true;

        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

   cout << endl;
}
int main() {
    int numbers[] = {2, 3, 4, 3, 2, 6, 7, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Unique values: ";
    printUniqueValues(numbers, size);

    return 0;
}

