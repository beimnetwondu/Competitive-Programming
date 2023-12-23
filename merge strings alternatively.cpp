#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string mergedString = "";
        int i = 0;
        int j = 0;
        while (i < word1.length() && j < word2.length()) {
            mergedString += word1[i];
            mergedString += word2[j];
            i++;
            j++;
        }
        while (i < word1.length()) {
            mergedString += word1[i];
            i++;
        }
        while (j < word2.length()) {
            mergedString += word2[j];
            j++;
        }
        return mergedString;
    }
};
