#include <iostream>
#include <vector>
#include <algorithm>

bool pairCompare(std::pair<std::string, int> a, std::pair<std::string, int> b){

    if(a.second < b.second){return 0;}
    else if(a.second == b.second){return a.first < b.first;}
    else{return 1;}
}


int main(){

    long n; std::cin >> n;
    std::vector<std::pair<std::string, int> > scores(n);
    for(long p = 0; p < n; p++){
        std::string name; int score;
        std::cin >> name >> score;
        scores[p] = make_pair(name, score);
    }

    sort(scores.begin(), scores.end(), pairCompare);
    for(int p = 0; p < n; p++){std::cout << scores[p].first << " " << scores[p].second << std::endl;}

    return 0;
}
