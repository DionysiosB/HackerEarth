#include <iostream>

int main(){

    const int N = 26;
    int n; std::cin >> n;
    while(n--){
        std::string s; std::cin >> s;
        std::string t = s;
        for(int p = 0; p < t.size(); p++){
            int a = s[p] - 'a' + 1;
            int b = s[t.size() - 1 - p] - 'a' + 1;
            int u = (a + b); if(u > N){u -= N;}
            char c = 'a' + u - 1;
            t[p] = c;
        }

        std::cout << t << std::endl;
    }

    return 0;
}
