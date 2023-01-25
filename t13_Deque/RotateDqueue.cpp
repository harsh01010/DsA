void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    if(k>n) k = n;
    while(k--)
    {
          deq.push_back(deq.front());
          deq.pop_front();
    }
}

void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    if(k>n) k = n;
    while(k--)
    {
         deq.push_front(deq.back());
         deq.pop_back();
    }
    
}