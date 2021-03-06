#include <iostream>
#include <vector>
#include <algorithm>

// Function Object
template <typename T>
struct myStruct{
    int divisor = 2;
    bool operator() (const T& dividend){
        std::cout << dividend << '\n';
        return (dividend % divisor == 0);
    }
};

int main() {
    std::cout << "Hello, Yashwanth!" << std::endl;
    std::vector<int> vec =  {1,2,3,4,5};
    for_each(vec.begin(),vec.end(),myStruct<int>());
    return 0;
}
// Write Funciton Object

