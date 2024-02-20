class OrderedStream {
public:
    vector<string> stream;
    int ptr = 0;
    OrderedStream(int n) {  
            stream.resize(n, " ");
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> r = {};
        stream[idKey-1] = value;
        while(ptr < stream.size() && stream[ptr]!= " "){
            r.push_back(stream[ptr]);
            ptr++;
        }
        return r;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */