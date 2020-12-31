echo Compilation process started
echo Compiling with flag -O0 
g++ -O0 -Wall ./src/main.cpp -o ./bin/looper_O0.exe
echo Compiling with flag -O1
g++ -O1 -Wall ./src/main.cpp -o ./bin/looper_O1.exe
echo Compiling with flag -O2
g++ -O2 -Wall ./src/main.cpp -o ./bin/looper_O2.exe
echo Compiling with flag -O3
g++ -O3 -Wall ./src/main.cpp -o ./bin/looper_O3.exe
echo Compiling with flag -Os
g++ -Os -Wall ./src/main.cpp -o ./bin/looper_Os.exe
echo Compiling with flag -Ofast
g++ -Ofast -Wall ./src/main.cpp -o ./bin/looper_Ofast.exe
echo Done compiling