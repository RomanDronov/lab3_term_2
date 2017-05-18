#ifndef SEQUENCE_H
#define SEQUENCE_H
class Isequence:public QObject {
public:
    int num;
    virtual	int sum(int idx_sum)=0;
    virtual	int index(int idx)=0;
   Isequence(int c_num) {
        num = c_num;
    }
};

class geom :public Isequence {
    int q;
public:
    geom(int c_num,int c_q):Isequence(c_num) {
        q = c_q;
    }
    void set(int c_num,int c_q){
        q=c_q;
        num=c_num;
    }

    int sum(int idx_sum) {
        int s;
        s = (((num*(pow(q, idx_sum) - 1))) / (q - 1));
        return s;
    }
int index(int idx) {

        int i;
        i = num*pow(q, (idx - 1));
        return i;
    }
};
class arifm :public Isequence {
    int d;
public:
    arifm(int c_num, int c_d):Isequence(c_num) {
        d = c_d;
    }
    int sum(int idx_sum) {
        int s;
        s = ((2 * num + d*(idx_sum - 1)) / 2)*idx_sum;
        return s;
    }
    int index(int idx) {
        int i;
        i = num + d*(idx - 1);
        return i;
    }
};
class constant_seq :public Isequence {
public:
    constant_seq(int c_num):Isequence(c_num) {
        num = c_num;
    }
    int sum(int idx_sum) {

        return num*idx_sum;
    }
    int index(int idx) {
        return idx;
    }

};
#endif // SEQUENCE_H
