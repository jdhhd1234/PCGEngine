#pragma once
#include <random>

class RND_System
{
private:

    // Why Not Add random_device?
    // That Reason is My Engine Not Need Secure
    std::mt19937 rnd;

public:

    int random_system(int start, int end)
    {
        std::uniform_int_distribution<int> dis(start, end);

        return dis(rnd);
    }
};