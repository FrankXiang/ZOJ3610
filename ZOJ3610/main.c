

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, const char * argv[]) {
    int T;
    scanf("%d",&T);
    getchar();
    while (T-->0) {
        char buf[70];
        gets(buf);
        char *buf_add[3];
        char *s = strtok(buf," ");
        int i = 0;
        while(s){
            buf_add[i] = s;
            s = strtok(NULL," ");
            i++;
        }
        printf("%s will survive\n",buf_add[1]);
    }
    return 0;
}
