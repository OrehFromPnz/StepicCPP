// ���������� ������ ������� power, ���
//    x - �����, ������� ����� �������� � �������
//    p - �������, � ������� ����� �������� x
//

int power(int x, unsigned p) {
    int answer=x;
    if(p==0){
       answer=1;
    }
    else{
    for(unsigned i=0; i<p-1; i++){
        answer*=x;
        }
    }
    /* ������� answer */
    return answer;
}

//best solution
int power(int x, unsigned p) {
    if(p) return x * power(x, --p);
    return 1;
