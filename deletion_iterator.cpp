#include <iostream>
using namespace std;
#include <vector>

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro" << std::endl;

    std::vector<int> v = {1,2,3,4,3,5,3,3,4,5};
    std::vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); )
    {
        if (*it == 3)
        {
            it = v.erase(it);
        }
        else
            ++it;
    }
    
    for (it = v.begin(); it != v.end(); ++it)
            std::cout << *it << std::endl;
            
    return 0;
}