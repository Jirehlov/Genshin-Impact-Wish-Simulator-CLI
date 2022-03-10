#include <random>
#include <chrono>
#include "random_gen.h"

std::random_device seed_gen;
unsigned int seed_r = seed_gen() % 10000000;
unsigned long long int seed_t = static_cast<unsigned long long int>(std::chrono::high_resolution_clock::now().time_since_epoch().count()) * static_cast<unsigned long long int>(100000);
size_t seed = static_cast<size_t>(seed_t) + static_cast<size_t>(seed_r);
std::mt19937_64 generatorz(seed);
