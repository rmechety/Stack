#include <gtest/gtest.h>

#include <vector>

#include "MyStack.hpp"

struct ParamFrontBack {
  std::list<int> stack_a;
  std::list<int> stack_b;
  int result;
};

std::vector<ParamFrontBack> paramsFrontA = {
    {std::list<int>{1}, std::list<int>{1, 2, 3}, 1},
    {std::list<int>{1, 2, 3, 4}, std::list<int>{1, 2, 3}, 1},
    {std::list<int>{1}, std::list<int>{}, 1},
    {std::list<int>{1, 2}, std::list<int>{1, 2, 3}, 1}};

class MyStackTestFront : public ::testing::TestWithParam<ParamFrontBack> {};

TEST_P(MyStackTestFront, TestFrontA) {
  ParamFrontBack params = GetParam();
  MyStack stack;
  stack.set_stack_a(params.stack_a);
  stack.set_stack_b(params.stack_b);
  EXPECT_EQ(params.result, stack.front_a());
}

INSTANTIATE_TEST_CASE_P(TestFrontA, MyStackTestFront,
                        testing::ValuesIn(paramsFrontA));
