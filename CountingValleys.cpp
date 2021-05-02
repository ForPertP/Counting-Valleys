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
