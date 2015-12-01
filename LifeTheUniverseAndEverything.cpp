#include <cstdio>

int main(){

    int x;
    while(scanf("%d\n", &x) != EOF){
        if(x != 42){printf("%d\n", x);}
        else{break;}
    }

    return 0;
}
