// Problem Link => https://leetcode.com/problems/seat-reservation-manager/description/?envType=daily-question&envId=2023-11-06

class SeatManager {
public:
priority_queue<int, vector<int>, greater<int>> seat;
    SeatManager(int n) {
        for(int i=1; i<=n; i++)
            seat.push(i);
    }
    
    int reserve() {
        int r = seat.top();
        seat.pop();
        return r;
    }
    
    void unreserve(int seatNumber) {
        seat.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */