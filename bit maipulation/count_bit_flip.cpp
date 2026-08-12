


#include <iostream>
#include<cassert>
#include<cstdint>

using namespace std;


static std::uint64_t count_bit_flip(std::int64_t A, std::int64_t B) {
    int count=0;
    A= A^B;
    while (A>0) {
        A= A&(A-1);
        count++;
    }
    return count;
}




int main() {
    int a = 10, b = 20;

    cout<<count_bit_flip(a,b)<<endl;

    return 0;


}