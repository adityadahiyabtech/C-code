//Calculate Delayed Arrival Time
//https://leetcode.com/problems/calculate-delayed-arrival-time/description/
int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return (arrivalTime +delayedTime)%24;
}
