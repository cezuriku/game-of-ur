#include <gtest/gtest.h>

class DummyTest : public ::testing::Test {
protected:
  DummyTest() = default;
  virtual ~DummyTest() = default;
};

TEST_F(DummyTest, OnePlusOneIsTwo) { EXPECT_EQ(1 + 1, 2); }
