
#include <math.h> 
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

#define DEBUG 0

int main(int argc, char** argv) {


#if DEBUG
    std::stringstream ss;

    ss <<
            std::string(R"(
            
            
   5
4 5 3
2 3 1
6 4 5         
2 2 3
0 0  1         )");

#else
#define ss std::cin
#endif

    long count;

    ss >> count;
    long a, b, c;

    while (count--) {
        ss >> a;
        ss >> b;
        ss >> c;

        long rc = lround(((a * b) / (c * c * 1.0))) * c * c ;
    
        if (rc == 0)
                std::cout << c*c <<std::endl;
        else
            std::cout << rc << std::endl;
    }
    return 0;
}
