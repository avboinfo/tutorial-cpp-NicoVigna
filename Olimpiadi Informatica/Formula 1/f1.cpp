#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

// input data
int N;
vector<int> H, V;

int main()
{
    //  uncomment the following lines if you want to read/write from files
    //  ifstream cin("input.txt");
    //  ofstream cout("output.txt");

    cin >> N;
    H.resize(N);
    for (int i = 0; i < N; i++)
        cin >> H[i];
    V.resize(N);
    for (int i = 0; i < N; i++)
        cin >> V[i];

    // insert your code here
    int TTotH=0;
    int TTotV=0;
    int MinV=INT32_MAX;
    int MinH=INT32_MAX;

    for (int i = 0; i < N; i++)
    {
        TTotH +=H[i];
        TTotV +=V[i];
    }

    for (int i=0; i < N; i++)
    {
        if (MinH > H[i])
            MinH = H[i];
        if (MinV > V[i])
            MinV = V[i];
    }
    if (TTotH < TTotV)
        cout << "Hamilton" << endl;
    else
        cout << "Verstappen" << endl;
    if (MinH < MinV)
        cout << "Hamilton" << endl;
    else
        cout << "Verstappen" << endl;
    return 0;
}
