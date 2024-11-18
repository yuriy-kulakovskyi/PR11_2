#include <gtest/gtest.h>
#include "../include/main.h"

TEST(FindWordsTest, HandleFind) {
	EXPECT_EQ(FindWords("t.txt"), 3);
}