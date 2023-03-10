#pragma once 
#include <iostream>
#include <random>

constexpr int MIN = 1;
constexpr int MAX = 100;
constexpr int RAND_NUMS_TO_GENERATE = 10;


int generate_random_number(){
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);
  return distr(eng);
}


