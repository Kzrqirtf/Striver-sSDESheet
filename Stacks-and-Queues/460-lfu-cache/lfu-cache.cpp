
class LFUCache {
    int c;
    unordered_map<int,pair<int,int>> mpp; // key -> {value, frequency}
    unordered_map<int,list<int>::iterator> keyIt; // key -> iterator in frequency list
    unordered_map<int,list<int>> freqList; // frequency -> list of keys
    int minFrequency;
public:
    LFUCache(int capacity) {
        c = capacity;
        minFrequency = 0;
    }
    
    int get(int key) {
        if(mpp.find(key)!=mpp.end())
        {
            auto it = keyIt[key];
            int value = mpp[key].first;
            int frequency = mpp[key].second;
            freqList[frequency].erase(it); // Remove from current frequency list
            if(freqList[frequency].empty()) {
                freqList.erase(frequency);
                if(minFrequency == frequency) {
                    minFrequency++; // Increment minFrequency if it's empty
                }
            }
            frequency++; // Increase frequency
            mpp[key].second = frequency; // Update frequency in map
            freqList[frequency].push_back(key); // Add to new frequency list
            keyIt[key] = --freqList[frequency].end(); // Update iterator
            return value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(c == 0) return;
        if(get(key) != -1) {
            mpp[key].first = value; // Update value if key exists
            return;
        }
        if(mpp.size() == c) {
            int leastFrequentKey = freqList[minFrequency].front(); // Get least frequent key
            freqList[minFrequency].pop_front(); // Remove least frequent key
            if(freqList[minFrequency].empty()) {
                freqList.erase(minFrequency); // Remove frequency entry if list becomes empty
            }
            mpp.erase(leastFrequentKey); // Remove from cache
            keyIt.erase(leastFrequentKey); // Remove iterator entry
        }
        mpp[key] = {value, 1}; // Add new key to cache with frequency 1
        freqList[1].push_back(key); // Add to frequency list with frequency 1
        keyIt[key] = --freqList[1].end(); // Set iterator to the end of the list
        minFrequency = 1; // Update minFrequency
    }
};