class Solution {
public:
    map <int,string> Hmap ={
        {3000,"MMM"},
        {2000, "MM"},
       {1000,"M"},
       {900,"CM"},
       {800,"DCCC"},
       {700,"DCC"},
       {600, "DC"},
       {500,"D"},
       {400,"CD"},
       {300,"CCC"},
       {200, "CC"},
       {100,"C"},
       {90,"XC"},
       {80, "LXXX"},
       {70, "LXX"},
       {60, "LX"},
       {50,"L"},
       {40,"XL"},
       {30, "XXX"},
       {20, "XX"},
       {10,"X"},
       {9, "IX"},
       {8, "VIII"},
       {7, "VII"},
       {6, "VI"},
       {5,"V"},
       {4,"IV"},
       {3, "III"},
       {2, "II"},
       {1,"I"},
       {0,""}
    };
    string intToRoman(int num) {
        string converted = "";
        int temp;
        int i =1;
         while(num>0){
             temp = num%(int)pow(10,i);
             converted = Hmap.at(temp) + converted;
             num = num - temp;
             i+=1;
         }
        return converted;
    }
};