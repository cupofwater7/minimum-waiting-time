#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int minimumWaitingTime(vector<int> queries);

int main()
{
    vector<int> queries= { 3, 2, 1, 2, 6 };
    int actual = minimumWaitingTime(queries);

    cout << actual << " ";

    return 0;
}

int minimumWaitingTime(vector<int> queries) {
    sort(queries.begin(), queries.end());

    int sums = 0;
    for (int i = 0; i < queries.size(); i++)
    {
        int duration = queries[i];
        int queriesLeft = queries.size() - (i + 1);

        sums += duration * queriesLeft;
        //formule is i value * array size -(i + 1 )

    }
    // Write your code here.
    return sums;
}

