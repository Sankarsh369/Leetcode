class RecentCounter {
    queue<int> q; // A queue to store the timestamps of the pings

public:
    RecentCounter() {
        // Initializes the counter with zero recent requests
    }
    
    int ping(int t) {
        // 1. Add the current ping timestamp to the back of the queue
        q.push(t);
        
        // 2. Remove all pings from the front that are older than t - 3000
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }
        
        // 3. The remaining elements in the queue are within the valid time window
        return q.size();
    }
};


/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */