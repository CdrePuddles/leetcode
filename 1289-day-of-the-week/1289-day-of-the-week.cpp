class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {



        int value = 0;
        int month2 = 0;

        if (month >2) {
            month2 = month;
        } else {
            month2 = month +12;
            year--;

        }

        int century = year / 100;
        int year2 = year % 100;

        int monthValue = 13 * (month2 + 1) / 5;

        value = (day + monthValue - 2 * century + year2 + year2/4 + century/4) % 7 ;
        if (value <0) {
            value = value + 7;
        }
        string ret = "";

        switch(value) {
            case 1:
                ret = "Sunday";
                break;
            case 2:
                ret = "Monday";
                break;
            case 3:
                ret = "Tuesday";
                break;
            case 4:
                ret = "Wednesday";
                break;
            case 5:
                ret = "Thursday";
                break;
            case 6:
                ret = "Friday";
                break;
            case 0:
                ret = "Saturday";
                break;
        }
        return ret;
    }
};