#include <iostream>

int main(){

    long n; std::string s;
    std::cin >> n >> s;

    long minLength(0), maxLength(0);
    long vs(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == 'v'){++vs;}
        else if(s[p] == 'w'){vs += 2;}
        else{
            minLength += 1 + vs/2 + (vs % 2);
            maxLength += 1 + vs;
            vs = 0;
        }
    }

    minLength += vs / 2 + (vs % 2);
    maxLength += vs;

    std::cout << minLength << " " << maxLength << std::endl;

    return 0;
}
