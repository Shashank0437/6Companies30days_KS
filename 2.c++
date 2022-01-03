class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        int x1=min(R1[0],R2[0]);
        int x2=max(L1[0],L2[0]);
        int y1=min(L1[1],L2[1]);
        int y2=max(R1[1],R2[1]);
        return x1>=x2 && y1>=y2;
    }
};
