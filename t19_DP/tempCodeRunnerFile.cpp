unordered_map<char, int> mp1, mp2;
    for (auto it : s)
        mp1[it]++;
    for (auto it : ss)
        mp2[it]++;

    // unordered_set<char>included;
    int res = 0;
    for (auto it : s)
    {
        if (mp1.find(it) != mp1.end())
        {
            if (mp2.find(it) != mp2.end())
            {
                res += max(mp1[it], mp2[it]);
                mp2.erase(it);
            }

            else
                res += mp1[it];

            mp1.erase(it);
        }
        else
        {
            res += mp2[it];
            mp2.erase(it);
        }
    }

    for (auto it : ss)
    {
        if (mp2.find(it) != mp2.end())
        {
            if (mp1.find(it) != mp1.end())
            {
                res += max(mp1[it], mp2[it]);
                mp1.erase(it);
            }

            else
                res += mp2[it];

            mp2.erase(it);
        }
        else
        {
            res += mp1[it];
            mp1.erase(it);
        }
    }

    return res;