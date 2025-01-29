class MyStack {
// Stack<Integer>st;
Queue<Integer>q;
Queue<Integer>hlpr;
    public MyStack() {
        // st=new Stack<>();
        q=new LinkedList<>();
        hlpr=new LinkedList<>();
    }
    
    public void push(int x) {
        if(q.size()==0){
            q.add(x);
        }
        else{
            while(!q.isEmpty()){
                int val=q.poll();
                hlpr.add(val);
            }
            q.add(x);
            while(!hlpr.isEmpty()){
                int val=hlpr.poll();
                q.add(val);
            }

        }
    }
    
    public int pop() {
        return q.poll();
    }
    
    public int top() {
        return q.peek();
    }
    
    public boolean empty() {
        return q.isEmpty();
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */