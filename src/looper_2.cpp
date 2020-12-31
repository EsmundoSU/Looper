#include <iostream>
#include <cstring>
#include <cstdlib>
#include <chrono>

int main()
{
    std::chrono::steady_clock::time_point startTime;
    std::chrono::steady_clock::time_point endTime;
    
    const int limit = 1'000'000;
    int sum = 0, sum0 = 0, sum1= 0, sum2 = 0, sum3 = 0, index = 0;
    uint8_t randDataArray[limit+4] = { 1 };

    // Value inits
    for (uint8_t &byte : randDataArray)
    {
        byte = 1;
    }
    

    // 2nd looper
    startTime = std::chrono::steady_clock::now();
    for (index = 0; index < limit; index += 4)
    {
        sum0 += randDataArray[index];
        sum1 += randDataArray[index+1];
        sum2 += randDataArray[index+2];
        sum3 += randDataArray[index+3];
    }
    sum = sum0 + sum1 + sum2 + sum3;
    endTime = std::chrono::steady_clock::now();

    std::cout << "2nd LOOP Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count() << "[µs] " << sum << std::endl;
}