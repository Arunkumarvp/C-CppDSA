class myStack {
    int top;
    int capacity;
    int *stackItems;
public:
    myStack(int n) {
        capacity = n;
        top = -1;
        stackItems = new int[n];
    }

    ~myStack() {
        delete[] stackItems;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void push(int x) {
        if (isFull()) {
            std::cout << "Stack Overflow\n";
            return;
        }
        stackItems[++top] = x;
        std::cout << "Element pushed to stack\n";
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow\n";
            return;
        }
        std::cout << "Element popped from stack: " << stackItems[top] << "\n";
        top--;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            return -1;
        }
        return stackItems[top];
    }

    int size() {
        return top + 1;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            return;
        }

        std::cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            std::cout << stackItems[i] << " ";
        }
        std::cout << "\n";
    }

    void clear() {
        top = -1;
    }
};