    int minPartitions(string n) {
        char tem = '0';
        char mx = CHAR_MIN;
        for(auto c: n)
            mx = max(mx, c);
        return mx -'0';
    }
