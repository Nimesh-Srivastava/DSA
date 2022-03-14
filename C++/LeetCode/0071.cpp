//Solution 1 :-
class Solution {
public:
  string simplifyPath(string path) {
    std::deque<std::string> stk;
    std::stringstream ss(path);
    std::string curr{};
    while (std::getline(ss, curr, '/')) {
      if (curr == "." or int(curr.length()) == 0)
        continue;
      if (curr == "..") {
        if (!stk.empty())
          stk.pop_back();
        else
          continue;
      } else
        stk.push_back(curr);
    }
    if (stk.empty())
      return "/";
    std::string ans;
    while (!stk.empty()) {
      ans += "/" + stk.front();
      stk.pop_front();
    }
    return ans;
  }
};


//Solution 2 :-
class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string> st;
        string res;
        
        for(int i = 0;  i<path.size(); ++i) {
            if(path[i] == '/')    
                continue;
            
            string temp;
            
            while(i < path.size() && path[i] != '/') {
                temp += path[i];
                i++;
            }
            
            if(temp == ".")
                continue;
			
            else if(temp == "..") {
                if(!st.empty())
                    st.pop();
            }
            
            else
                st.push(temp);
        }
        
        while(!st.empty()) {
            res = "/" + st.top() + res;
            st.pop();
        }
        
        if(res.size() == 0)
            return "/";
        
        return res;
    }
};
