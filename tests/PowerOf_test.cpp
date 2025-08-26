//
// Created by Steph on 8/26/2025.
//
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/PowerOf.h"

TEST_CASE("Testing NaivePower") {
    BENCHMARK("Trail 1") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 2") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 3") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 4") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 5") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 6") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 7") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 8") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 9") {
        naivePower(10, 10);
    };

    BENCHMARK("Trail 10") {
        naivePower(10, 10);
    };
}

TEST_CASE("Testing UnoptimizedDCPower") {
    BENCHMARK("Trail 1") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 2") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 3") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 4") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 5") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 6") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 7") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 8") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 9") {
        unoptimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 10") {
        unoptimizedDCPower(10, 10);
    };
}

TEST_CASE("Testing OptimizedDCPower") {
    BENCHMARK("Trail 1") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 2") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 3") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 4") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 5") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 6") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 7") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 8") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 9") {
        optimizedDCPower(10, 10);
    };

    BENCHMARK("Trail 10") {
        optimizedDCPower(10, 10);
    };
}