#include <iostream>
#include <vector>
#include <algorithm> // std::sort を使用するためのヘッダー


int main() {

    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};


    std::cout << "Original array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    //check here
    std::sort(numbers.begin(), numbers.end());

    // TODO   dff
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // TODO　454545
    return 0;
 }