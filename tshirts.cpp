#include <assert.h>
#include <iostream>

char size(int cms) {
    char sizeName = '\0';
    if (cms < 38) {
        sizeName = 'S';
    } else if (cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if (cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {

     // Test cases for size 'S'
    assert(size(37) == 'S');
    assert(size(0)  == 'S');  
    assert(size(38) == 'S'); 
    assert(size(-1) == 'S');

    // Test cases for size 'M'
    assert(size(39) == 'M');
    assert(size(40) == 'M');
    assert(size(41) == 'M');
    assert(size(42) == 'M'); 

    // Test cases for size 'L'
    assert(size(43) == 'L');
    assert(size(100) == 'L'); 


    std::cout << "All is well (maybe!)\n";
    return 0;
}