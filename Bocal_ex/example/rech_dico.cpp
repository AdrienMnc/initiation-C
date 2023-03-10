#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {1, 3, 4, 7, 9, 10, 12};

    int target = 4;
    if (std::binary_search(v.begin(), v.end(), target)) {
        std::cout << "La valeur " << target << " a été trouvée." << std::endl;
    } else {
        std::cout << "La valeur " << target << " n'a pas été trouvée." << std::endl;
    }
    

    target = 6;
    if (std::binary_search(v.begin(), v.end(), target)) {
        std::cout << "La valeur " << target << " a été trouvée." << std::endl;
    } else {
        std::cout << "La valeur " << target << " n'a pas été trouvée." << std::endl;
    }

    return 0;
}
