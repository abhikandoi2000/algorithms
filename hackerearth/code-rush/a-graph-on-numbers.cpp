//A Graph on Numbers
//Score 3
//Time Limit Exceeded - use sieve for precomputation of primes
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t,u,v;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &u, &v);
        //prime factorization of v
        int count = 0;
        for(int i = 2; v != 1  ; i=i) {
            if(v % i == 0) {
                v = v / i;
                count++;
            } else {
                i++;
            }
        }
        count--;
        printf("%d", count);
    }
    return 0;
}
