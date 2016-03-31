#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> vaccines(n);
    std::vector<long> patients(n);
    for(long p = 0; p < n; p++){scanf("%ld", &vaccines[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &patients[p]);}
    sort(vaccines.begin(), vaccines.end());
    sort(patients.begin(), patients.end());

    for(long p = 0; p < n; p++){if(vaccines[p] < patients[p]){puts("No"); return 0;}}

    puts("Yes"); return 0;
}
