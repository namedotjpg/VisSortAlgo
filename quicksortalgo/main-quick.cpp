#include <iostream>
#include "../functions.h"
#include "quick.h"
using namespace std;

int main() {
    int * arr = generateRandomArray(20);
    quickSort(arr, 0, 19);
    return 0;
}
