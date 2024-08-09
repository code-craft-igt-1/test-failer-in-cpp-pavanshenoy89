#include <assert.h>
#include <iostream>
#include <sstream>
#include <string>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

void testPrintColorCodeMap() {
    std::ostringstream oss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(oss.rdbuf());

    PrintColorCodeMap();

    std::cout.rdbuf(oldCoutBuffer);

    std::string expectedOutput = 
        "1 | White | Blue\n"
        "2 | White | Orange\n"
        "3 | White | Green\n"
        "4 | White | Brown\n"
        "5 | White | Slate\n"
        "6 | Red | Blue\n"
        "7 | Red | Orange\n"
        "8 | Red | Green\n"
        "9 | Red | Brown\n"
        "10 | Red | Slate\n"
        "11 | Black | Blue\n"
        "12 | Black | Orange\n"
        "13 | Black | Green\n"
        "14 | Black | Brown\n"
        "15 | Black | Slate\n"
        "16 | Yellow | Blue\n"
        "17 | Yellow | Orange\n"
        "18 | Yellow | Green\n"
        "19 | Yellow | Brown\n"
        "20 | Yellow | Slate\n"
        "21 | Violet | Blue\n"
        "22 | Violet | Orange\n"
        "23 | Violet | Green\n"
        "24 | Violet | Brown\n"
        "25 | Violet | Slate\n";

    assert(oss.str() == expectedOutput);
    std::cout << "All test cases passed!\n";
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    testPrintColorCodeMap();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
