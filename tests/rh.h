#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <string>
#include <iostream>
#include <sstream>

#include "common.h"
#include "text.h"
#include "_text.h"

TEST(rh , first_line)
{
    text txt = create_text();
    txt->lines->push_back("line 0\n");
    txt->lines->push_back("line 1\n");
    txt->lines->push_back("line 2\n");

    rh(txt);
    EXPECT_EQ(txt->lines->size(), static_cast<unsigned int>(2));
}

TEST(rh , no_lines)
{
    text txt = create_text();
    txt->cursor->line_num = -1;
    txt->cursor->position = -1;

    rh(txt);
    EXPECT_EQ(txt->lines->size(), static_cast<unsigned int>(0));
}
