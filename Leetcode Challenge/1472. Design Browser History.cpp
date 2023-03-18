// TC:- O(min(n,steps))
// SC:- O(N)

1. Using Doubly LinkedList
// definition a doubly linkedlist struct with three attributes
struct linkedlist{
    linkedlist* front; // points to the next node
    linkedlist* back; // points to previous node
    string val;
    linkedlist(): front(nullptr),back(nullptr),val(""){}
    linkedlist(string x): front(nullptr),back(nullptr),val(x){}
};

class BrowserHistory {
public:
    linkedlist* browser; // a pointer to the current node in the linkedlist
    BrowserHistory(string homepage) {
        browser=new linkedlist(homepage); // first node 
    }
    
    void visit(string url) {
        browser->front=nullptr; // deleting the forward history
        linkedlist* temp=new linkedlist(url); // create a new node for that URL 
        browser->front=temp; // insert it at the front of the linkedlist
        temp->back=browser;
        browser=temp; // the current node is updated to the new node
    }
    
    string back(int steps) {
        while(steps-- and browser->back){
            browser=browser->back;
        }
        return browser->val;
    }
    
    string forward(int steps) {
    while(steps-- and browser->front){
            browser=browser->front;
        }
        return browser->val;
    }
};
2. Using stacks
class BrowserHistory {
public:
    stack<string> upcoming; // store the forward urls
    stack<string> prev; // store the history
    string curr; // the current url 
    BrowserHistory(string homepage) {
        curr=homepage;
    }
    
    void visit(string url) {
        prev.push(curr);
        curr=url;  // current url is updated to the newly visited url
        upcoming=stack<string>();  // delete the forward history
    }
    
    string back(int steps) {
        while(steps-- and !prev.empty()){
            upcoming.push(curr);
            curr=prev.top();
            prev.pop();
        }
        return curr;
    }
    
    string forward(int steps) {
    while(steps-- and !upcoming.empty()){
            prev.push(curr);
            curr=upcoming.top();
            upcoming.pop();
        }
        return curr;
    }
};
