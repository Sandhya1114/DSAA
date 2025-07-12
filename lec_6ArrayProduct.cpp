#include <iostream>
using namespace std;
void sumAndProduct(const int arr[], int size, int &sum, int &product) {
    sum = 0;
    product = 1;

    for (int i = 0; i < size; ++i) {
        sum = sum + arr[i];
        product =product * arr[i];
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum, product;
    sumAndProduct(numbers, size, sum, product);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product <<endl;

    return 0;
}
