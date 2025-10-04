// Vectors: like arrays but they are dinamic size
#include <iostream>
#include <vector>
using namespace std;
template <typename T> void printVector(vector<T> vect);
// declations
vector<int> vec;
vector<int> vec1 = {1, 2, 3};
vector<int> vec2(3, 0);
vector<char> vec3 = {'q', 'e', 'g', 'd', 'g', 'h'};

int main() {
  printVector(vec);
  printVector(vec1);
  printVector(vec2);
  printVector(vec3);
  // Methods
  // size
  cout << vec3.size() << endl;
  // pushBack
  vec.push_back(34);
  vec.push_back(4);
  vec.push_back(8);
  printVector(vec);
  vec.pop_back();
  printVector(vec);
  // front
  int los = vec1.front();
  cout << los << endl;
  // back
  int l = vec1.back();
  cout << l << endl;
  // at
  int el = vec1.at(2);
  cout << el << endl;
  return 0;
}

template <typename T> void printVector(vector<T> vect) {
  int len = vect.size();
  for (int i = 0; i < len; i++) {
    cout << vect[i] << " ";
  }
  cout << endl;
};
