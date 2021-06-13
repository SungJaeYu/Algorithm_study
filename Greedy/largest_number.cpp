#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

bool compare(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    return ab > ba;
}

string largest_number(vector<string> a) {
    std::sort(a.begin(), a.end(), compare);
    std::stringstream ret;
    for (size_t i = 0; i < a.size(); i++) {
    ret << a[i];
    }
    string result;
    ret >> result;
    return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
