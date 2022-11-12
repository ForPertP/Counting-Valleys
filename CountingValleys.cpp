#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path)
{
    int count_vally = 0;
    int current_sealevel = 0;

    for_each (path.cbegin(), path.cend(),
        [&] (auto ch)
        {
            if (ch == 'U')
            {
                if( ++current_sealevel == 0)            
                {
                    count_vally++;
                }
            }
            else
            {
                current_sealevel--;
            }
        }
    );
    
    return count_vally;
}
