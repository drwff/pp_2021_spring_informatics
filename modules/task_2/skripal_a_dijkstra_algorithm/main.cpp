// Copyright 2021 Skripal Andrey
#include <gtest/gtest.h>
#include <omp.h>
#include <vector>
#include <iostream>
#include "../../../modules/task_2/skripal_a_dijkstra_algorithm/dijkstra_algorithm.h"

TEST(Deikstra_Algorithm, test1) {
    int size = 1000;
    int start = 1;
    int end = 888;
    double t1, t2;
    std::vector<int> graph = getGraph(size);
    t1 = omp_get_wtime();
    std::vector<int> res1 = parallelDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "parallel Time: " << t2 - t1 << std::endl;
    t1 = omp_get_wtime();
    std::vector<int> res2 = seqDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "seq Time: " << t2 - t1 << std::endl;
    ASSERT_EQ(res1, res2);
}

TEST(Deikstra_Algorithm, test2) {
    int size = 777;
    int start = 60;
    int end = 489;
    double t1, t2;
    std::vector<int> graph = getGraph(size);
    t1 = omp_get_wtime();
    std::vector<int> res1 = parallelDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "parallel Time: " << t2 - t1 << std::endl;
    t1 = omp_get_wtime();
    std::vector<int> res2 = seqDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "seq Time: " << t2 - t1 << std::endl;
    ASSERT_EQ(res1, res2);
}

TEST(Deikstra_Algorithm, test3) {
    int size = 501;
    int start = 44;
    int end = 444;
    double t1, t2;
    std::vector<int> graph = getGraph(size);
    t1 = omp_get_wtime();
    std::vector<int> res1 = parallelDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "parallel Time: " << t2 - t1 << std::endl;
    t1 = omp_get_wtime();
    std::vector<int> res2 = seqDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "seq Time: " << t2 - t1 << std::endl;
    ASSERT_EQ(res1, res2);
}

TEST(Deikstra_Algorithm, test4) {
    int size = 1460;
    int start = 12;
    int end = 1002;
    double t1, t2;
    std::vector<int> graph = getGraph(size);
    t1 = omp_get_wtime();
    std::vector<int> res1 = parallelDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "parallel Time: " << t2 - t1 << std::endl;
    t1 = omp_get_wtime();
    std::vector<int> res2 = seqDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "seq Time: " << t2 - t1 << std::endl;
    ASSERT_EQ(res1, res2);
}

TEST(Deikstra_Algorithm, test5) {
    int size = 900;
    int start = 1;
    int end = 900;
    double t1, t2;
    std::vector<int> graph = getGraph(size);
    t1 = omp_get_wtime();
    std::vector<int> res1 = parallelDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "parallel Time: " << t2 - t1 << std::endl;
    t1 = omp_get_wtime();
    std::vector<int> res2 = seqDijkstras(graph, start, end);
    t2 = omp_get_wtime();
    std::cout << "seq Time: " << t2 - t1 << std::endl;
    ASSERT_EQ(res1, res2);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
