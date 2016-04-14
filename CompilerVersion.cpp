#include <iostream>

int main(){

    std::string line;
    while(getline(std::cin, line)){

        int index(0);
        bool comment(false);
        while(index < line.size() - 1){
            if(line[index] == '/' && line[index + 1] == '/'){comment = true;}

            if(!comment && line[index] == '-' && line[index + 1] == '>'){printf("."); ++index;}
            else{std::cout << line[index];}
            ++index;
        }

        if(index == line.size() - 1){std::cout << line[line.size() - 1];}
        std::cout << std::endl;
    }

    return 0;
}
