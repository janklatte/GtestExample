#include <gtest/gtest.h>
#include <gtest_example/my_lib.h>



// Demonstrate some basic testing.
TEST(AddTest, AddTwoPositiveInts) {
	EXPECT_EQ(add(5, 2), 7);
}

TEST(AddTest, AddTwoNegativeInts) {
	EXPECT_EQ(add(-5, -2), -7);
}

TEST(ProductTest, MultiplyTwoPositiveInts)
{
	auto result = product(5, 2);
	EXPECT_EQ(result, 10);
}

class MeineKlasseTest : public ::testing::Test
{
protected:
	void SetUp()
	{
		for (int i = 0; i < 10; i++)
		{
			inputArray.at(i) = i;
		}
	}
	std::array<float, 10> inputArray;

};

TEST_F(MeineKlasseTest, ObjektInstanzieren)
{	
	ASSERT_NO_THROW(MeineKlasse(inputArray));
}

TEST_F(MeineKlasseTest, Calculate)
{
	auto objekt = MeineKlasse(inputArray);
}

