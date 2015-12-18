#include <cstdio>
#include <vector>

int main(){

    long Q; scanf("%ld\n", &Q);
    std::vector<long> food;
    while(Q--){
        int action; scanf("%d", &action);
        if(action == 1){
            if(food.size() <= 0){puts("No Food");}
            else{printf("%ld\n", food.back()); food.pop_back();}
        }
        else if(action == 2){
            long price; scanf("%ld", &price); food.push_back(price);
        }
    }

    return 0;
}
