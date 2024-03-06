#include <gtest/gtest.h>
#include "gtest_example/stack.h"

class StackTest : public ::testing::Test
{
protected:
	void SetUp()
	{
		
	}
};

TEST_F(StackTest, EmptyStack)
{
	GenericStack<float> myStack;
	EXPECT_TRUE(myStack.isEmpty());
}
