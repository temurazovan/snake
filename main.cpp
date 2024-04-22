#include <iostream>

void initialization(int arr[5][5]) {
    int count = 0;
    int multiplier = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = count;
            count++;
        }
        multiplier *= -1;
    }
}

void printArray(int arr[5][5]) {
    int multiplier = 1;
    int rowNum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
            rowNum += multiplier;
        }
        multiplier *= -1;
        rowNum += multiplier;
        std::cout << std::endl;
    }
}

int main() {
    int array[5][5];
    initialization(array);
    printArray(array);
}
