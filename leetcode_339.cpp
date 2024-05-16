https://algo.monster/liteproblems/339
https://leetcode.com/problems/nested-list-weight-sum/description/


#include <bits/stdc++.h>
using namespace std;

class NestedInteger {
   public:
    bool isInteger;
    
    int integerValue;
    
    vector<NestedInteger> nested;
    
    void setInteger(int i) {
        isInteger = true;
        integerValue = i;
    }
    
    void setNestedInteger(vector<NestedInteger> &next) {
        nested = next;
        isInteger = false;
    }
};

int dfs(vector<NestedInteger> nestedIntegers, int depth) {
    int ans = 0;
    
    for(NestedInteger nestedInteger: nestedIntegers) {
        if(nestedInteger.isInteger) {
            ans += nestedInteger.integerValue * depth;
        } else {
            ans += dfs(nestedInteger.nested, depth + 1);
        }
    }
    
    return ans;
}
int depthSolve(vector<NestedInteger> nestedIntegers) {
    return dfs(nestedIntegers, 1);
}

int main() {
	// your code goes here
	
	NestedInteger child1, child2, child3, child11,  child12, child21, child22;
	
//	child2.setInteger(5);   //[[2, 3],5, 6]
	child3.setInteger(6);
	
	child11.setInteger(2);
	child12.setInteger(3);
	
	child21.setInteger(2);
	child22.setInteger(3);
	
	vector<NestedInteger> child2s;
	child2s.push_back(child21);
	child2s.push_back(child22);
	child2.setNestedInteger(child2s);
	
	vector<NestedInteger> child1s;
	child1s.push_back(child11);
	child1s.push_back(child12);
	child1.setNestedInteger(child1s);
	
	vector<NestedInteger> childs;
    childs.push_back(child1);
    childs.push_back(child2);
    childs.push_back(child3);
    
    cout << depthSolve(childs) << endl;
    
	
	return 0;
}
