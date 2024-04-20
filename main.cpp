#include <iostream>

void initialization(int arr[5][5]) {
    int count = -1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            count++;
            arr[i][j] = count;
        }
    }
}

void printArray(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int array[5][5];
    initialization(array);
    printArray(array);
}
