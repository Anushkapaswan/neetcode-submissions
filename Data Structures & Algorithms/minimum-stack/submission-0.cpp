class MinStack {
public:
    int arr[1000];
    int i=-1;
    MinStack() {
        
    }
    
    void push(int val) {
         i++;
        arr[i]=val;
    }
    
    void pop() {
        if(i>=0)
        i--;
    }
    
    int top() {
        return arr[i];
    }
    
    int getMin() {
        int mn=arr[0];
        for(int j=1;j<=i;j++){
            mn=min(mn,arr[j]);
        }
        return mn;
    }
};
