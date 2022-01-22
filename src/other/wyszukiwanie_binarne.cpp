/*
 Wyszukiwanie binarne (ang. binary search).
 Działa on metodą połowienia ciągu az do uzyskania wyszukiwaniej wartości,
 aczkolwiek ciąg musi być posortowany (od najmniejszego do największego).

 Zlozonosc: O(log2(n))
*/

#include <vector>

using namespace std;

int binarySearch(int value, int start, int end, vector<int> array) {
  while (start < end) {
    int mid = (start + end) / 2;

    if (array[mid] < value)
      start = mid + 1;
    else
      end = mid - 1;
  }

  return start;
}