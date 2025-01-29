
class MinStack {
Stack<Integer>st;
Stack <Integer>main;
    public MinStack() {
        st=new Stack<>();
        main=new Stack<>();
    }
    
    public void push(int val) {
        main.push(val);
        if(st.size()==0 || val<=st.peek()){
            st.push(val);
        }
    }
    
    public void pop() {
        // if(!st.isEmpty())
        // if(st.peek()==main.peek()){
        //     st.pop();
        // }

int a=st.peek();
int b=main.pop();
if(a==b)st.pop();
    //    if(!main.isEmpty()) main.pop();
    }
    
    public int top() {
        return main.peek();
    }
    
    public int getMin() {

        // if(st.size()>0)return st.peek();
        return st.size()!=0?st.peek():-1;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */