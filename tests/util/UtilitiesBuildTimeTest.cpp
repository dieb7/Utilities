#include "CppUTest/TestHarness.h"
#include "UtilitiesBuildTime.h"

TEST_GROUP(UtilitiesBuildTime)
{
    UtilitiesBuildTime* projectBuildTime;

    void setup()
    {
        projectBuildTime = new UtilitiesBuildTime();
    }
    void teardown()
    {
        delete projectBuildTime;
    }
};

TEST(UtilitiesBuildTime, Create)
{
    CHECK(0 != projectBuildTime->GetDateTime());
}

