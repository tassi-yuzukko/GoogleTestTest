// GoogleTestTest.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "gtest/gtest.h"

int func(int);

//int _tmain(int argc, _TCHAR* argv[])
//{
//	fprintf(stdout, "%d", func(1));
//
//	return 0;
//}

TEST(AddTest, PositiveNumber) {
	EXPECT_EQ(4, func(2));
}

int func(int x){
	return x*x;
}

