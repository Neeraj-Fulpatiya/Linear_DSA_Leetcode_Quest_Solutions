class Solution {
public:
    string intToRoman(int num) {
        string roman = "";
        int temp = num;

        while(temp != 0) {
            if(temp >= 1000) {
                roman += 'M';
                temp -= 1000;
            } else if(temp >= 900) {
                roman += "CM";
                temp -= 900;
            } else if(temp >= 500) {
                roman += 'D';
                temp -= 500;
            } else if(temp >= 400) {
                roman += "CD";
                temp -= 400;
            } else if(temp >= 100) {
                roman += 'C';
                temp -= 100;
            } else if(temp >= 90) {
                roman += "XC";
                temp -= 90;
            } else if(temp >= 50) {
                roman += 'L';
                temp -= 50;
            } else if(temp >= 40) {
                roman += "XL";
                temp -= 40;
            } else if(temp >= 10) {
                roman += 'X';
                temp -= 10;
            } else if(temp >= 9) {
                roman += "IX";
                temp -= 9;
            } else if(temp >= 5) {
                roman += 'V';
                temp -= 5;
            } else if(temp >= 4) {
                roman += "IV";
                temp -= 4;
            } else if(temp >= 1) {
                roman += 'I';
                temp -= 1;
            }
        }
        return roman;
    }
};