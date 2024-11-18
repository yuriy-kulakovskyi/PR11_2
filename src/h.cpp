#include "../include/main.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PrintTXT(const char* fname) {
  ifstream fin(fname);
  if (!fin.is_open()) {
    cerr << "Error opening file" << endl;
    return;
  }
  string line;
  while (getline(fin, line)) {
    cout << line << endl;
  }
  fin.close();
}


int FindWords(const char* fname) {
  ifstream fin(fname);
  if (!fin.is_open()) {
    cerr << "Error opening file" << endl;
    return 0;
  }

  string s;
  int k = 0;
  bool inWord = false;
  int wordStart = 0;

  while (getline(fin, s))
  for (int i = 0; i <= s.length(); i++) {
    if (s[i] != ' ' && s[i] != '\0') {
      if (!inWord) {
        inWord = true;
        wordStart = i;
      }
    } else {
      if (inWord) {
        inWord = false;
        if (s[wordStart] == s[i - 1]) {
          k++;
        }
      }
    }
  }

  fin.close();
  return k;
}