#pragma once

#include "../../src/lib.cpp"
#include "gtest/gtest.h"

TEST(test_add, add_two_positive_nums) {
  EXPECT_EQ(3, add(1, 2));
  EXPECT_EQ(3, add(2, 1));
  EXPECT_EQ(1, add(1, 0));
  EXPECT_EQ(1, add(0, 1));
}