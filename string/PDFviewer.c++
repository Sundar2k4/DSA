int designerPdfViewer(vector<int> h, string word)
{
    int n = h.size();
    int m = word.size();
    vector<int> values;
    unordered_map<char, int> charind;

    for (char c = 'a'; c <= 'z'; c++)
    {
        charind[c] = c - 'a';
    }

    for (int i = 0; i < word.size(); i++)
    {
        values.push_back(h[charind[word[i]]]);
    }

    int maxval = *max_element(values.begin(), values.end());

    int res = maxval * m;

    return res;
}
