#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> sortedVector = { 1, 1, 2, 2, 2, 2, 3, 4, 4, 4, 5, 6, 6 };

    int k = 0;

    for (unsigned i = 0; i < sortedVector.size(); ++i) {
        const auto duplicate = std::adjacent_find(sortedVector.begin(), sortedVector.end());

        if (duplicate != sortedVector.end()) {
            sortedVector.erase(sortedVector.begin() + *duplicate);

            if (*duplicate) {
                k++;
            }
        }
    }

    std::cout << "Vector contains: ";
    for (unsigned i = 0; i < sortedVector.size(); ++i)
        std::cout << ' ' << sortedVector[i];
    std::cout << '\n';

    std::cout << "Removed total of: " << k << " Repeated numbers. ";

    return 0;
}
