#include <cstdio>
#include <set>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        int e; scanf("%d\n", &e);
        std::set<int> cities;
        while(e--){int a, b; scanf("%d %d\n", &a, &b); cities.insert(a); cities.insert(b);}
        printf("%ld\n", cities.size());
    }

    return 0;
}
