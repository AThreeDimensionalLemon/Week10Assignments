#include <iostream>

static int pigeonHole(int objects, int groups) {
    return objects * groups + 1;
}

static int combination() {


    return 0;
}

int main() {
    std::cout << "Eisig Liang - 23 Mar. 2025\n";

    // Testing pigeonHole; used objects = 3 - 1 = 2 students and groups = 12 months
    std::cout << "Min. num. of students in class s.t. 3 are born in the same month: " << pigeonHole(3 - 1, 12) << std::endl;

    return 0;
}