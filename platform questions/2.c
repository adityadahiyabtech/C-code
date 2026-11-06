//smallest even mutiple
//https://leetcode.com/problems/smallest-even-multiple/description/
int smallestEvenMultiple(int n) {
   if (n % 2 == 0)
        return n;
    else
        return n * 2;
}  
