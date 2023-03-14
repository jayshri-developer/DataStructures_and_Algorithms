// PL:- https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1
// TC:- o(1)
// SC:- o(1)

//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
    top1++;
    arr[top1] = x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    top2--;
    arr[top2] = x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(arr[top1] == NULL)
    {
        return -1;
    }
    else
    {
        return arr[top1--];
    }
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(arr[top2] == NULL)
    {
        return -1;
    }
    else
    {
        return arr[top2++];
    }
}
