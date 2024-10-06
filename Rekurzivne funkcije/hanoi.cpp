#include <iostream>

void solveHanoiRaw(int n, char starting, char helper, char goal) {
        if(n==1) {
                std::cout<<"1: "<<starting<<" -> "<<goal<<'\n';
                return;
        }
    
        solveHanoiRaw(n-1, starting, goal, helper);
        std::cout<<n<<": "<<starting<<" -> "<<goal<<'\n';
        solveHanoiRaw(n-1, helper, starting, goal);
}

void solveHanoi(int n) {
        solveHanoiRaw(n, 'A', 'B', 'C');
        return;
}
