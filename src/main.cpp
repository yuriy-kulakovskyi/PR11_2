#include <iostream>
#include "../include/main.h"

using namespace std;

int main() {
    cout << "Contents of file:" << endl;
    PrintTXT("t.txt");
    cout << "Number of words with the same first and last letter: " << FindWords("t.txt") << endl;
    return 0;
}
