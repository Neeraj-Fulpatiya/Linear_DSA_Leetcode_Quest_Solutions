import java.util.Stack;

class MinStack {
    Stack<Integer> st;
    Stack<Integer> main;

    public MinStack() {
        st = new Stack<>();
        main = new Stack<>();
    }

    public void push(int val) {
        main.push(val);
        if (st.isEmpty() || val <= st.peek()) {
            st.push(val);
        }
    }

    public void pop() {
        if (!main.isEmpty()) {
            if (!st.isEmpty() && st.peek().equals(main.peek())) {
                st.pop();
            }
            main.pop();
        }
    }

    public int top() {
        return main.isEmpty() ? -1 : main.peek(); // Edge case: If empty, return -1
    }

    public int getMin() {
        return st.isEmpty() ? -1 : st.peek(); // Edge case: If empty, return -1
    }
}
