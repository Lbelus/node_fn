#ifndef MINSTACK_STRUCT
#define MINSTACK_STRUCT
struct obj {
    int val;
    struct obj*next;
};
typedef struct obj MinStack;
#endif

MinStack* minStackCreate() {
    
}

void minStackPush(MinStack* obj, int val) {
  
}

void minStackPop(MinStack* obj) {
  
}

int minStackTop(MinStack* obj) {
  
}

int minStackGetMin(MinStack* obj) {
  
}

void minStackFree(MinStack* obj) {
    
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
