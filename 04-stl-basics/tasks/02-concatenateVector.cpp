#include <iostream>
#include <vector>

std::vector<int> concatenateVector(const std::vector<int>& left,
                                   const std::vector<int>& right) {
    std::vector<int> result;
    for (size_t i = 0; i < left.size(); ++i) {
        result.push_back(left[i]);
        result.push_back(right[i]);
    }

    return result;
}

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
