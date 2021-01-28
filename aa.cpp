#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int correspond = 0;
    for (int i = 0; i <= s.size() - t.size(); i++)
    {
        int cor = 0;
        for (int j = 0; j < t.size(); j++)
        {
            if (s.at(i + j) == t.at(j))
                cor++;
        }
        correspond = max(correspond, cor);
    }

    cout << t.size() - correspond << endl;
}