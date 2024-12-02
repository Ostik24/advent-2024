#include <iostream>
#include <fstream>
#include <unordered_map>
#include <algorithm>
#include <vector>

int solve() {
    std::ifstream file("/Users/ostappavlyshyn/CLionProjects/advent 2024/day 1/input.txt");

    std::vector<int> firstColumn;
    std::vector<int> secondColumn;
    std::unordered_map<int, int> map;
    int n = 0;
    int result1 = 0;
    int result2 = 0;

    int num1, num2;
    while (file >> num1 >> num2) {
        firstColumn.push_back(num1);
        secondColumn.push_back(num2);
        map[num2]++;
        n++;
    }

    std::sort(firstColumn.begin(), firstColumn.end());
    std::sort(secondColumn.begin(), secondColumn.end());

    for (int i = 0; i < n; i++)
    {
        result1 = result1 + abs(firstColumn[i] - secondColumn[i]);
        result2 = result2 + (firstColumn[i] * map[firstColumn[i]]);
    }

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;

    file.close();
    return 0;
}
