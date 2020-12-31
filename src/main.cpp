#include <iostream>
#include <cstring>
#include <cstdlib>
#include <chrono>

int main(int argc, char** argv)
{
    if (argc == 0)
    {
        std::cout << "No arguments passed";
        return 1;
    }

    if(std::strcmp(argv[1],"help") == 0)
    {
        std::cout << "Info:";
        std::cout << "1st ARG:\t Sums limit";
        return 0;
    }
    
    long long limit = 0, index = 0;
    std::chrono::steady_clock::time_point startTime;
    std::chrono::steady_clock::time_point endTime;
    int sum = 0, sum0 = 0, sum1= 0, sum2 = 0, sum3 = 0;
    char *randDataArray;

    limit = std::atoll(argv[1]);

    if(limit <= 0)
    {
        std::cout << "NO negative:\t ArgV:" << argv[1] << "\tlimit: " << limit << std::endl;
        return 2;
    }
    randDataArray = new char[4*limit];


    // 1st LOOPER
    startTime = std::chrono::steady_clock::now();
    for (index = 0; index < 4*limit; index += 4)
    {
        sum += randDataArray[index] + randDataArray[index + 1] + randDataArray[index + 2] + randDataArray[index + 3]; 
    }
    endTime = std::chrono::steady_clock::now();

    std::cout << "1st LOOP Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count() << "[µs] " << sum << std::endl;

    delete randDataArray;
    sum = 0;
    randDataArray = new char[4*limit];

    // 2nd LOOPER
    startTime = std::chrono::steady_clock::now();
    for (index = 0; index < 4*limit; index += 4)
    {
        sum0 += randDataArray[index];
        sum1 += randDataArray[index+1];
        sum2 += randDataArray[index+2];
        sum3 += randDataArray[index+3];
    }
    sum = sum0 + sum1 + sum2 + sum3;
    endTime = std::chrono::steady_clock::now();

    std::cout << "2nd LOOP Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count() << "[µs] " << sum << std::endl;
    delete randDataArray;
}