#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    std::vector<int> v = { 4, 7, 5, 2, 6, 9 };
    int key = 6;
 
    if (std::count(v.begin(), v.end(), key)) {
        std::cout << "Element found";
    }
    else {
        std::cout << "Element not found";
    }
 
    return 0;
}

