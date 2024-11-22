class MyQueue {
public:
  MyQueue() {
        
    }
    
    void push(int x) {
		while (!nums.empty()) {
			helper.push(nums.top());
			nums.pop();
		}
		nums.push(x);
		while (!helper.empty()) {
			nums.push(helper.top());
			helper.pop();
		}
    }
    // Removes the element from in front of queue.
    int pop() {
        int x = nums.top();
        nums.pop();
        return x;
    }
    // Get the front element.
    int peek() {
        return nums.top();
    }
    // Return whether the queue is empty.
    bool empty() {
		return nums.empty();
    }
private:
	std::stack<int> helper, nums;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */