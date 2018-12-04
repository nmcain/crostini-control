
#include <iostream>

bool hasEnding (std::string const &fullString, std::string const &ending) {
    if (fullString.length() >= ending.length()) {
        return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending));
    } else {
        return false;
    }
}

int main () {
    std::string test1 = "binary";
    std::string test2 = "unary";
    std::string test3 = "tertiary";
    std::string test4 = "ry";
    std::string ending = "nary";

    std::cout << hasEnding (test1, ending) << std::endl;
    std::cout << hasEnding (test2, ending) << std::endl;
    std::cout << hasEnding (test3, ending) << std::endl;
    std::cout << hasEnding (test4, ending) << std::endl;

    return 0;
}
 /*#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char em;
    float num1, num2;

    cout << "District Email:";
    cin >> em;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(em)
    {


        case '-':
            cout << num1-num2;
            break;



        default:
            // If the operator is other than +, -, * or /, error message is shown
            system("clear");

            cout << "\033[1;31mThis account is not eligible to use this device.\033[0m\n";
            break;
    }

    return 0;
}*/

 /*#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        cout << "Usage: " << argv[0] << " [operation] [integer 1] [integer 2]\n";
        cout << "Operation may be " << "\"" << "add" << "\""<< " or " << "\"" << "sub" << "\"\n";
        return 0;
    }
    const string operation = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int result;

    if (operation == "add") // NOTE! '=' -> assigns; '==' -> compares
    {
        result = num1 + num2;
    }
    else if (operation == "sub") // NOTE! '=' -> assigns; '==' -> compares
    {
        result = num1 - num2;
    }
}*/


/*#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "json.hpp"

using json = nlohmann::json;


int main() {
   system("clear");
   system("Loading");
   system("ls -a");

   return 0;
}*/