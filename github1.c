#include <stdio.h>

int main() {
    int bill_amt,amt_given,r,q;
    scanf("%d %d",&amt_given,&bill_amt);
    q=amt_given/bill_amt;
    r=amt_given%bill_amt;
    printf("%d is the Quotient \n",q);
    printf("%d is the Remainder",r);
    
    
    return 0;
}