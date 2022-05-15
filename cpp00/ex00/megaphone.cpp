#include <iostream>
#include <string>

int function(std::string str) {
    int i = 0;
    while (i < (int) str.size()) {
        std::cout << (char) toupper(str[i]);
        i++;
    }
    return (0);
}

int main(int argc, char **argv) {
    int i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while (i < argc) {
            if (i != 1)
                std::cout << " ";
            function(argv[i]);
            i++;
        }
    }
    std::cout << std::endl;
    return (0);
}
