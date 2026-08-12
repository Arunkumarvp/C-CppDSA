
#include <algorithm>
#include <atomic>
#include<iostream>
#include<cassert>
#include<cstdio>


using namespace std;


bool checkEvenOdd(std::atomic_int64_t num) {

    return(num & 1) == 0 ? true : false;


}

int main() {
    int n=44;

    cout<<"results:"<<checkEvenOdd(n)<<endl;

}