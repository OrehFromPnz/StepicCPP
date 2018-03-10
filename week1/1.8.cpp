// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
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
    /* считаем answer */
    return answer;
}

//best solution
int power(int x, unsigned p) {
    if(p) return x * power(x, --p);
    return 1;
