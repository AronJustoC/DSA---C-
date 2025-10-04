// Vectors: like arrays but they are dinamic size
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
template <typename T> void printVector(vector<T> vect);
// declations
vector<int> vec;
vector<int> vec1 = {1, 2, 3};
vector<int> vec2(3, 0);
vector<char> vec3 = {'q', 'e', 'g', 'd', 'g', 'h'};
template <typename T> vector<T> uniquesElements(vector<T> vect);
int singleNumber(vector<int> numbers);

int main() {
  printVector(vec);
  printVector(vec1);
  printVector(vec2);
  printVector(vec3);
  // Methods
  // size
  cout << vec3.size() << endl;
  cout << vec3.capacity() << endl;
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
  vector<char> vect5 = uniquesElements(vec3);
  printVector(vect5);
  vector<int> nums1 = {2, 2, 1};
  int result = singleNumber(nums1);
  cout << result << endl;
  return 0;
}

template <typename T> vector<T> uniquesElements(vector<T> vect) {
  if (vect.empty()) {
    return vect;
  }
  sort(vect.begin(), vect.end());
  auto last_unique = unique(vect.begin(), vect.end());
  vect.erase(last_unique, vect.end());
  return vect;
};

template <typename T> void printVector(vector<T> vect) {
  int len = vect.size();
  for (int i = 0; i < len; i++) {
    cout << vect[i] << " ";
  }
  cout << endl;
};

int singleNumber(vector<int> numbers) {
  int ans = 0;
  for (int num : numbers) {
    ans ^= num;
  }
  return ans;
};
