#include <iostream>
#include <vector>
#include <algorithm> // std::sort を使用するためのヘッダー

// メイン関数
int main() {
    // 整数のベクター（動的配列）を宣言し、初期化する
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // 配列の内容を出力する
    std::cout << "Original array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 配列をソートする
    std::sort(numbers.begin(), numbers.end());

    // ソート後の配列の内容を出力する
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 正常終了を示すために0を返す
    return 0;
 }