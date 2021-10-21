class RandomizedSet {
private:
  unordered_map<int, int> mp;
   vector<int> l;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
      
      if (mp.count(val)) {
        return false;
      }
        mp[val] = l.size();
        l.push_back(val);
        return true;
    }
    
    bool remove(int val) {
      
      if (!mp.count(val)) return false;
        int removedIndex = mp[val];
        mp.erase(val);
        if (removedIndex < l.size() - 1) { // if we can replace with last value
            int lastVal = l[l.size() - 1];
            l[removedIndex] = lastVal;
            mp[lastVal] = removedIndex;
        }
        l.pop_back();
        return true;
    }
    
    int getRandom() {
      return l[rand() % l.size()];
      
    }
};
