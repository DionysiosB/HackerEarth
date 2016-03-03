#include <cstdio>

int main(){

    int t; scanf("%d",&t);

    while(t--){
        int index,n;
        scanf("%d %d\n",&index,&n);
        if(index == 0){if(n % 2){puts("1");} else puts("0");}
        else if(index==1){if(n % 2){puts("0");} else puts("1");}
        else if(index == 2){
            if(n == 0) puts("2");
            else if(n%2) puts("1");
            else puts("0");
        }
    }

    return 0;
}
