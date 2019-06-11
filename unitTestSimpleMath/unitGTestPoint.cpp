
#include "gtest/gtest.h"
#include "../dziedziceVS.h"
#include "../point.h"

#define GTEST_COUT std::cerr << "[          ] [ INFO ]"
using namespace std;

TEST(TestPointClass, TestOperatorEqual)
{

	point a{ 1.1,1.1 };
	point b{ 2.2,2.2 };
	a = b;
	EXPECT_EQ(a.getX(),b.getX());
	EXPECT_EQ(a.getY(),b.getY());

}

TEST(TestPointClass, TestCopyConstructor)
{
	point a{ 1.1,1.1 };
	point b{ a };

	EXPECT_EQ(a.getX(),b.getX());
	EXPECT_EQ(a.getY(),b.getY());
}

TEST(TestPointClass, TestObjectCounter)
{
	point a{ 1.1,1.1 };
	point b{ 2.2,2.2 };
	point c{ b };
	point d=b;
	
	EXPECT_EQ(a.get_id(), 1);
	EXPECT_EQ(b.get_id(), 2);
	EXPECT_EQ(c.get_id(), 3);
	EXPECT_EQ(d.get_id(), 4);
}

TEST(TestPointClass, TestOverloadOperatorCout)
{
	point a{ 1.1,1.1 };
	point b{ 2.2,2.2 };
	testing::internal::CaptureStdout();
	cout << a << b;
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "<1>(1.1,1.1)<2>(2.2,2.2)");
}