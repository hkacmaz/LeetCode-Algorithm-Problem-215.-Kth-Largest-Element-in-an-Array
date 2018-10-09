//
//  main.cpp
//  P215-2
//
//  Created by Halil Kacmaz on 10/8/18.
//  Copyright © 2018 Halil Kacmaz. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>, greater<int> > pq;
        
        for(int i=0; i<nums.size(); ++i)
        {
            if(pq.size()<k)
            {
                pq.push(nums[i]);
            }
            else if(nums[i]>pq.top())
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
        
    }
};

int main() {
    
    Solution so;
    
    vector<int> v = {3,2,1,5,6,4};
    
    int k=2;
    
    cout << so.findKthLargest(v, k) << endl;
    
    return 0;
}
