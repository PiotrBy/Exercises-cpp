#include "headers.hpp"
#include <iostream>
#include <vector>

using namespace std;

void vectorLoop(int _amount, vector<int> &_v) {
    for (int i = 0; i < _amount; i++) {
        int element;
        cout << "Podaj element:" << endl;
        cin >> element;
        _v.push_back(element);
    }
}

void vectorPrint(vector<int> _v) {
    for (int i = 0; i < _v.capacity(); i++) {
        cout << _v[i] << endl;
    }
}

bool isPalindrome(vector<int> _v) {
    for (int i = 0, j = _v.size() - 1; i < j; i++, j--) {
        return _v[i] == _v[j];
    }
};