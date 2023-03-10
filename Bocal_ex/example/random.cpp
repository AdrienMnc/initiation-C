#include <iostream>
#include <random>

constexpr int MIN = 1;
constexpr int MAX = 100;

constexpr int RAND_NUMS_TO_GENERATE = 10;

int main()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(MIN, MAX);

    for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n) {
        std::cout << distr(eng) << std::endl;
    }

    return 0;
}