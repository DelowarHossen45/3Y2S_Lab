#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j, k;
    n = 5;
    m = 3;
    int alloc[n][m],requ[n][m],avail[m],temp[m]={0},instance[m]={0};
    cout<<"Enter instance\n";
    for(i=0;i<m;i++){
        cin>>instance[i];
    }

    cout<<"Enter allocation\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>alloc[i][j];
        }
    }

    cout<<"Enter Request\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>requ[i][j];
        }
    }


    /*cout<<"Enter available\n";
    for(i=0;i<m;i++){
        cin>>avail[i];
    }*/

    for(int i=0;i<m;i++){
        for(j=0;j<n;j++){
            temp[i]=temp[i]+alloc[j][i];
        }
        avail[i]=instance[i]-temp[i];
    }


    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++) {
        f[k] = 0;
    }

    int y = 0;
    for (k = 0; k < 5; k++) {
        for (i = 0; i < n; i++) {
            if (f[i] == 0) {

                int flag = 0;
                for (j = 0; j < m; j++) {
                    if (requ[i][j] > avail[j]){
                        flag = 1;
                         break;
                    }
                }

                if (flag == 0) {
                    ans[ind++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }

    printf("Following is the SAFE Sequence\n");
    for (i = 0; i < n - 1; i++)
        printf(" P%d ->", ans[i]);
    printf(" P%d", ans[n - 1]);

    return (0);
}
