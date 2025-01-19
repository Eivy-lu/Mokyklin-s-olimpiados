#include<iostream>
#include<set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Vaikų pozicijos eilėje.
    // Jei masyvo indeksas yra vaiko numeris, tai masyvo reikšmė yra jo pozicija eilėje.
    int index[n];
    // nuskaitoma vaikų eilė
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        index[j-1] = i;
    }

    set<int> nelaimingi;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        int ai, bi; // vaikų pozicijos eilėje
        ai = index[a-1];
        bi = index[b-1];
        if (abs(ai - bi) != 1) {
            // Nestovi greta, nors norėtų
            nelaimingi.insert(a);
            nelaimingi.insert(b);
        }
    }
    cout << n - nelaimingi.size() << endl;
    return 0;
}