

#include <atomic>
#include<iostream>
#include<cstdio>
using namespace std;

std::atomic_uint_fast64_t  count_of_set_bit(std::atomic_uint_fast64_t num) {
    std::atomic_int64_t count=0;
    while (num !=0) {
        num= num&(num-1);
        ++count;
    }
    return {count};


}


int main() {

    std::atomic_uint_fast64_t num = 29; // Example number
    std::cout << "Number of set bits in " << num << " is " << count_of_set_bit(num) << std::endl;
    return 0;
}