#include "UtilitiesBuildTime.h"

UtilitiesBuildTime::UtilitiesBuildTime()
    : dateTime(__DATE__ " " __TIME__)
{
}

UtilitiesBuildTime::~UtilitiesBuildTime()
{
}

const char* UtilitiesBuildTime::GetDateTime()
{
    return dateTime;
}

