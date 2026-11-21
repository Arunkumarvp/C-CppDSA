#ifdef STACK_HPP

struct stack{
    int top;
    int capacity;
    int *array;
    stack(int size){
        this->capacity = size;
        this->top = -1;
        this->array = new int[size];
    }
}

#endif // STACK_HPP