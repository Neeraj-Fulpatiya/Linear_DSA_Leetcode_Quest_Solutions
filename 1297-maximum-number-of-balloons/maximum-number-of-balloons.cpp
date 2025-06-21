class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> v(5,0);
        for(int i=0; i<text.size();i++){
            if(text[i] == 'a') v[0]++;
            else if(text[i] == 'b') v[1]++;
            else if(text[i] == 'l') v[2]++;
            else if(text[i] == 'n') v[3]++;
            else if(text[i] == 'o') v[4]++;

        }
        v[2] /=2;
        v[4] /=2;
        int min = v[0];
        for(int i=1;i<5;i++){
            if(min > v[i]) min = v[i];
        }
        return min;
    }
};