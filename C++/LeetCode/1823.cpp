//Solution 1 :-
class Solution {
public:
  int findTheWinner(int n, int k) {
    if (n == 1)
      return 1;
    std::deque<int> deq;
    for (int i{1}; i <= n; i++)
      deq.push_back(i);
    while (!(int(deq.size()) == 2)) {
      int curr{k};
      while (curr-- > 1) {
        int front{deq.front()};
        deq.pop_front();
        deq.push_back(front);
      }
      deq.pop_front();
    }
    return deq[k % 2];
  }
};


//Solution 2 :-
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        
        for(int i = 1; i <= n; i++)
            q.push(i);
        
        while(q.size() != 1){
            int temp = k;
            
            while(temp > 1){
                int frnt = q.front();
                q.pop();
                q.push(frnt);
                temp--;
            }
            q.pop();
        }
        
        return q.front();
    }
};
