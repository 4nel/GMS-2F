#include <iostream>
#include <vector>
#include <algorithm>

void genPermutationsRaw(std::string str, int left, int right, std::vector<std::string>& memo) {
        if(left==right)
        {
                if(find(memo.begin(), memo.end(), str) == memo.end()) {
                        std::cout<<str<<'\n';
                        memo.push_back(str);
                }
                return;
        }
        
        for(int i=left; i<=right; i++) {
                if(str[left]!=str[i]) std::swap(str[left], str[i]);
                genPermutationsRaw(str, left+1, right, memo);
                if(str[left]!=str[i]) std::swap(str[left], str[i]);
        }
        return;
}

void genPermutations(std::string str) {
        std::vector<std::string> memo;
        genPermutationsRaw(str, 0, str.length()-1, memo);
        return;
}
