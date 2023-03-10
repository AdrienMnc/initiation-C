#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

void remove_all_occurrences(std::vector<int>& vec, int target) {
    vec.erase(std::remove(vec.begin(), vec.end(), target), vec.end());
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int value = 3;
    auto it = std::find(vec.begin(), vec.end(), value);
    if (it != vec.end()) {
        std::cout << "La valeur " << value << " a été trouvée à l'indice " << it - vec.begin() << std::endl;
    }
    vec = {4, 1, 3, 2, 5};
    std::sort(vec.begin(), vec.end());
    vec = {1, 2, 3, 4, 5};
    std::reverse(vec.begin(), vec.end());
    vec = {1, 2, 3, 4, 5};
    std::shuffle(vec.begin(), vec.end(), std::default_random_engine());    
    return 0;
}
