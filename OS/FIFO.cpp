#include <stdio.h>
//#include <string.h>
int main() {
    int ref[30],q[30];
    int i,j,k;
    int s,e,pos,N,size,count=0;
    s=e=pos=0;
    printf("Enter reference string length: ");
    scanf("%d",&N);
    printf("Number of frame:");
    scanf("%d",&size);

    printf("Enter reference string: ");


    for(i=0; i<N; i++)
        scanf("%d",&ref[i]);

    for(i=0; i<N; i++) { //i=0 1 2 3 ...19
        printf("%d  =",ref[i]);

        int found=0;

        for(j=0; j<e; j++) { // initially j=e=s=pos=0//this for checking ref==q
            if(ref[i]==q[j])  //check
                found=1;
        }

        if(found==1)
            printf("\n");
        else {
            count++;      //initially count=0,pos=0
            q[pos++]=ref[i];

            if(pos==size)
                pos=0;

            if(e<size)  //increasing e for print frame
                e++;

            for(j=0; j<e; j++) {
                printf(" %3d",q[j]);
            }
            printf("\n");
        }
    }

    printf("\nNumber of page fault: %d",count);


    return 0;
}
/*
20
3
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
*/

