/*#include<stdio.h>
int main(){

int curr_nom=3, curr_den=2, prev_nom=2, prev_den=1;
int gen_nom=0,gen_den=0;

float sum=0;

sum = ( ((float)curr_nom/(float)curr_den) +  ((float)prev_nom/(float)prev_den)  );

for(int i=3;i<=20;i++){

gen_nom = curr_nom+prev_nom;

gen_den = curr_den+prev_den;

sum = sum + ((float)gen_nom/(float)gen_den);

prev_nom = curr_nom;
prev_den = curr_den;

curr_nom=gen_nom;

curr_den=gen_den;


}

printf("\n\nSum of first 20 terms is %.3f",sum);



}*/

#include <stdio.h>

int main()
{

    // current and previous terms
    int curNum, curDen, prevNum, prevDen, genNum, genDen;
    float sum;
    prevNum = 2;
    prevDen = 1;
    curNum = 3;
    curDen = 2;
    sum = (prevNum / (float)prevDen) + ((float)curNum / curDen);
    printf("%d/%d, %d/%d, ", prevNum, prevDen, curNum, curDen);
    for (int i = 3; i <= 20; i++)
    {
        // generate the next term
        genNum = prevNum + curNum;
        genDen = prevDen + curDen;
        // add it to the running sum
        sum = sum + ((float)genNum / genDen);
        printf("%d/%d, ", genNum, genDen);
        prevNum = curNum;
        prevDen = curDen;
        curNum = genNum;
        curDen = genDen;
    }
    printf("\n");
    printf("The sum of the first 20 terms is %f\n", sum);

    return 0;
}