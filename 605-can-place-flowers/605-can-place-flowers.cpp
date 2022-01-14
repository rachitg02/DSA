class Solution {
public:
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int last_index=-1;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==1){
                last_index=i;
                continue;
            }
            if((i-1!=last_index || i==0) && (i==flowerbed.size()-1 || flowerbed[i+1]!=1 )){
                n--;
                last_index=i;
            }
        }
        if(n<=0)
            return true;
        return false;
    }
};