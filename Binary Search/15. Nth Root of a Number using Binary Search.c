/*
Nth Root of a Number using Binary Search
*/

/*
Brute Force Method
Time: O(n)
Space: O(1)
*/
int search(int exp, int num){
    for(int i = 0; i < num; i++){
        int temp = pow(i, exp);
        if(temp == num){
            return i;
        }
    }
    return -1;
}

/*
Optimal Method
Time: O(log n)
Space: O(1)
*/

int search(int expo, int num){
    int low = 0, high = num;
    while(low <= high){
        int mid = low + (high-low)/2;
      
        //find the power without using pow(base, exponent) function.
        long long ans = 1;
        for(int i = 0; i < expo; i++){
            ans *= mid;
            if(ans > num){
                break;
            }
        }
      
        if(ans == num){
            return mid;
        }
        else if(ans > num){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
