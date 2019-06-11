#include "gtest/gtest.h"
#include "..//segment.h"

#define GTEST_COUT std::cerr << "[          ] [ INFO ]"

TEST(TestSegmentClass, TestSegmentConstructor4xDouble)
{
	segment s1{ 1.1,1.1,2.2,2.2 };

	EXPECT_TRUE(s1.getX1() == 1.1);
	EXPECT_TRUE(s1.getY1() == 1.1);
	EXPECT_TRUE(s1.getX2() == 2.2);
	EXPECT_TRUE(s1.getY2() == 2.2);
}

TEST(TestSegmentClass, TestSegmentConstructorDoubleDouble)
{
	segment s1{ 1.1,1.1 };

	EXPECT_TRUE(s1.getX1() == 0);
	EXPECT_TRUE(s1.getY1() == 0);
	EXPECT_TRUE(s1.getX2() == 1.1);
	EXPECT_TRUE(s1.getY2() == 1.1);

	GTEST_COUT << s1.getSTART().getX() << "," << s1.getSTART().getY() << '\n';
	GTEST_COUT << s1.getEND().getX() << "," << s1.getEND().getY() << '\n';
}

TEST(TestSegmentClass, TestCopyConstructor) {
	segment s1{ 1.1,1.1 };
	segment s2{ s1 };
	  
  EXPECT_TRUE(s1==s2);
}