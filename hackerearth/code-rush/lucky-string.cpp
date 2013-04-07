//Lucking String
//Score 2
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    long long index;
    while(t--) {
        scanf("%lld", &index);
        double length = log(index + 1) / log(2);
        int len = (int) length;

        long long sum = 2*((long long)pow(2, len - 1)-1);
        long long local_index = index - sum - 1;
        int count = 0;
        char* nums = new char[60];
        string ans = "";
        while(local_index != 0) {
            int bit = local_index % 2;
            local_index = local_index >> 1;
            if(bit == 0) {
                nums[count] = '4';
                //ans = "4" + ans;
            } else {
                nums[count] = '7';
                //ans = "7" + ans;
            }
            count++;
        }
        int rest = len - count;
        for(int i = 0; i < rest; i++) {
            printf("4");
        }
        //cout<<ans<<endl;
        for(int i = count - 1; i >= 0 ; i--) {
            printf("%c", nums[i]);
        }
        printf("\n");

    }
    return 0;
}
