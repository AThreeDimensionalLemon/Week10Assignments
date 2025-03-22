#include <iostream>

static int pigeonHole(int objects, int groups) {
    return objects * groups + 1;
}

static int factorial(int n) {
    int result = n;
    n--;

    for (n; n > 0; n--) 
        result *= n;

    return result;
}

static int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    std::cout << "Eisig Liang - 23 Mar. 2025\n";

    // Testing pigeonHole; used objects = 3 - 1 = 2 students and groups = 12 months
    //std::cout << "Min. num. of students in class s.t. 3 are born in the same month: " << pigeonHole(3 - 1, 12) << std::endl;

    // Testing combination; used C(6, 3) * C(5, 2) * C(8, 4)
    std::cout << "Num. of choices farmer 1 can choose from farmer 2's stock: " << combination(6, 3) * combination(5, 2) * combination(8, 4);

    // Testing combination; used C(6, 3) * C(5, 2) * C(8, 4)
    std::cout << "Num. of choices farmer 1 can choose from farmer 2's stock: " << combination(6, 3) * combination(5, 2) * combination(8, 4);

    return 0;
}