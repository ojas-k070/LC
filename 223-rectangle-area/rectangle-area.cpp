class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int wa= ax2-ax1;
        int ha=ay2-ay1;
        int Aarea= wa*ha;
        int wb= bx2-bx1;
        int hb=by2-by1;
        int barea= wb*hb;

        int ow = max(0, min(ax2, bx2) - max(ax1, bx1));
        int oa = max(0, min(ay2, by2) - max(ay1, by1));
        int Oarea=ow*oa;

        int tarea=Aarea+barea-Oarea;
        return tarea;

    }
};