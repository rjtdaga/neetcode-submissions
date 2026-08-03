class MinStack {
public:
    vector <int> result;
    MinStack() {
        result = {};
    }
    
    void push(int val) {
        result.push_back(val);
    }
    
    void pop() {
        result.pop_back();
    }
    
    int top() {
        return result.back();
    }
    
    int getMin() {
        int min = result[0];
        for (int i = 1; i < result.size(); ++i)
        {
            if (min > result[i])
            {
                min = result[i];
            }
        }
        return min;
    }
};
