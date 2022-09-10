#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;
  int k;
  cin>>n>>k;
  int h = (n[0]-'0')*16;
  cout<<n[1]+10-'A'+h;
}