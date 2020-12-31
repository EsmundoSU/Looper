echo Compilation process started
echo Compiling with flag -O0 
g++ -O0 -Wall ./src/looper_1.cpp -o ./bin/looper_1_O0.exe
g++ -O0 -Wall ./src/looper_2.cpp -o ./bin/looper_2_O0.exe
echo Compiling with flag -O1
g++ -O1 -Wall ./src/looper_1.cpp -o ./bin/looper_1_O1.exe
g++ -O1 -Wall ./src/looper_2.cpp -o ./bin/looper_2_O1.exe
echo Compiling with flag -O2
g++ -O2 -Wall ./src/looper_1.cpp -o ./bin/looper_1_O2.exe
g++ -O2 -Wall ./src/looper_2.cpp -o ./bin/looper_2_O2.exe
echo Compiling with flag -O3
g++ -O3 -Wall ./src/looper_1.cpp -o ./bin/looper_1_O3.exe
g++ -O3 -Wall ./src/looper_2.cpp -o ./bin/looper_2_O3.exe
echo Compiling with flag -Os
g++ -Os -Wall ./src/looper_1.cpp -o ./bin/looper_1_Os.exe
g++ -Os -Wall ./src/looper_2.cpp -o ./bin/looper_2_Os.exe
echo Compiling with flag -Ofast
g++ -Ofast -Wall ./src/looper_1.cpp -o ./bin/looper_1_Ofast.exe
g++ -Ofast -Wall ./src/looper_2.cpp -o ./bin/looper_2_Ofast.exe
echo Done compiling