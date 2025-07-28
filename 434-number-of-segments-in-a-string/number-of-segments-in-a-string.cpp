class Solution {
public:
    int countSegments(string s) {
        int count = 0, size = s.length();
        bool isword = false;
        for(int i = 0; i < size; i++){
            if(s[i] != ' '){
                isword = true;
                int j = i;
                while(s[j] != ' ' && j < size){
                    j++;
                }
                i = j;
            }
            else if(s[i] == ' ')
                isword = false;

            if(isword)
                count++;
        }
        return count;
    }
};