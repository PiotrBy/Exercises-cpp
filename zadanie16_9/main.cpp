#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int amount;
    cout << "Podaj liczbę elementów" << endl;
    cin >> amount;
    for (int i = 0; i < amount; i++) {
        cout << "Podaj element" << endl;
        int j;
        cin >> j;
        v.push_back(j);
    }
    sort(v.begin(), v.end());
    cout << "Posortowane elementy: " << endl;
    for (int i = 0; i < amount; i++) {
        cout << v[i] << " ";
    }

    vector<int> unique;
    unique_copy(v.begin(), v.end(), back_inserter(unique));

    cout << endl << "Po usunięciu powtarzających sie elementów: ";

    int amount2 = unique.size();

    for (int i = 0; i != amount2; i++) {
        cout << unique[i] << " ";
    }
}
