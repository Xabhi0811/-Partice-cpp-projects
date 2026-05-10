class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int total = 0;
        int tank = 0;
        int start = 0;

        for(int i = 0; i < gas.size(); i++){

            int diff = gas[i] - cost[i];

            total += diff;
            tank += diff;

            // cannot continue
            if(tank < 0){

                // next station becomes new start
                start = i + 1;

                // reset tank
                tank = 0;
            }
        }

        // overall impossible
        if(total < 0)
            return -1;

        return start;
    }
};