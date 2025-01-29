class MyStack {
    queue<int>q;
    queue<int>hlpr;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(q.size()==0)q.push(x);
        else{
            while(!q.empty()){
                int a=q.front();
                hlpr.push(a);
                q.pop();

            }
            q.push(x);
            while(!hlpr.empty()){
                int a=hlpr.front();
                q.push(a);
                hlpr.pop();
            }
        }
    }
    
    int pop() {
        int a=q.front();
        q.pop();
        return a;
    }
    
    int top() {
        return q.front();
        
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */