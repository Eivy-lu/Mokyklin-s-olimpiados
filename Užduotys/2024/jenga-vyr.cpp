#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int N = n + ceil(k / 3.0);
    int DIDZ = k / 2;
    int MAZ;

    if (k > N - 2)
    {
        MAZ = k - (N - 2);
    }

    else
    {
        MAZ = 0;
    }
    cout << MAZ << endl << DIDZ << endl;

    return 0;
}
