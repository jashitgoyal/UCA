#include <stdio.h>
#include <sys/time.h>
int main(){
    struct timeval before;
    struct timeval after;

    gettimeofday(&before, NULL);
    long long before_millis = before.tv_sec*1000LL + before.tv_usec/1000;

    int sum = 0;
    for (int i = 0; i < 10000000; i++){
        sum+=i;
    }

    gettimeofday(&after,NULL);
    long long after_millis = after.tv_sec*1000LL + after.tv_usec/100;

    printf("%lld\n", after_millis - before_millis);

    return 0;
}

