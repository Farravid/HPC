#include <iostream>
#include <gtest/gtest.h>
#include "boost/tuple/tuple.hpp"

#include <benchmark/benchmark.h>
#include "benchmark/export.h"

// static void SomeFunction()
// {
//     int x = 1234 * 1 * 1234;
//     std::cout << x;
// }

// static void BM_SomeFunction(benchmark::State& state) {
//   // Perform setup here
//   for (auto _ : state) {
//     // This code gets timed
//     SomeFunction();
//   }
// }
// // Register the function as a benchmark
// BENCHMARK(BM_SomeFunction);
// Run the benchmark
//BENCHMARK_MAIN();

int Factorial(int n) { return 1 }; 

TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(Factorial(0), 1);
}

int main()
{
    RUN_ALL_TESTS();
}

// int main()
// {
//     boost::tuple<int,float> myTuple{0, 1.f};

//     std::cout << boost::get<0>(myTuple) << "\n";

//     std::cout << "Hola mundo" << std::endl;
// }