class MyHashSet {
public:
    vector<bool> v;
    MyHashSet() {
        v.resize(1024);
    }

    void add(int key) {
        while (key > v.size())
            v.resize(v.size() * 2);
        v[key] = true;
    }

    void remove(int key) {
        if (key < v.size())
        v[key] = false;
    }

    bool contains(int key) {
        return key < v.size() && v[key];

    }
};
