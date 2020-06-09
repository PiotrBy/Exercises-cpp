#include <iostream>
#include <vector>
#include "headers.hpp"

using namespace std;


int main() {

    vector<int> v;
    int amount;
    cout << "Podaj ile chcesz elementów" << endl;
    cin >> amount;
    vectorLoop(amount, v);
    if (isPalindrome(v)) {
        cout << "Mam dla Ciebie niespodzianke ! Elementy, które podałeś tworzą palindrom." << endl;
    } else {
        cout << "Niestety nie podałeś palindromu, nie pękaj i spróbuj ponownie !" << endl;
    }


}