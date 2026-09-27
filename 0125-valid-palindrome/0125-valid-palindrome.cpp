class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int arr[size];
        int k = 0;

        for(int i = 0 ; i < size ; i++) {
            if(s[i] == ' ' || ispunct(s[i])){
                continue;
            }
            else{
                arr[k] = tolower(s[i]);
                k++;
            }
        }
        
        for(int i = 0 ; i < k/2 ; i++) {
            if(arr[i] != arr[k - i - 1])
                return false;
        }

        return true;
    }
};