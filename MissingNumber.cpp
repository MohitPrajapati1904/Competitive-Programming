class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int temp=0;
        for(int i=1;i<=n;i++){
            temp=temp^i;
        }
        int temp1=0;
        for(int i=0;i<n-1;i++){
            temp1=temp1^array[i];
        }
        return temp^temp1;
    }
};
