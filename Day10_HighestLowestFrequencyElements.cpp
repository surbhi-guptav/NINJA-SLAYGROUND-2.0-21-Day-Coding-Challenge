vector<int> getFrequencies(vector<int>& v) {
    map<int, int> frequencyMap;
    for (int num : v) {
        frequencyMap[num]++;
    }

    int maxFreq = 0, minFreq = v.size();
    int maxFreqElement = INT_MAX, minFreqElement = INT_MAX;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFreq || (pair.second == maxFreq && pair.first < maxFreqElement)) {
            maxFreq = pair.second;
            maxFreqElement = pair.first;
        }
        if (pair.second < minFreq || (pair.second == minFreq && pair.first < minFreqElement)) {
            minFreq = pair.second;
            minFreqElement = pair.first;
        }
    }

    return {maxFreqElement, minFreqElement};
}


