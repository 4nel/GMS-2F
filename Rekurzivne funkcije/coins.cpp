//  Također, ovaj problem je poznat i kao "Coin Change Problem"
void solveRaw(int* coins, int number_of_coins, int target, int* j, int i) {
        if(target==0) {
            if(*j==0) *j=i;
            if(*j>i) *j=i;
            return;
        }
    
        for(int k=0; k<number_of_coins; k++) {
                if(coins[k]>target) continue;
                target-=coins[k];
                solveRaw(coins, number_of_coins, target, j, i+1);
                target+=coins[k];
        }
}

int solve(int* coins, int number_of_coins, int target) {
        int result=0;
        solveRaw(coins, number_of_coins, target, &result, 0);
        return result;
}
