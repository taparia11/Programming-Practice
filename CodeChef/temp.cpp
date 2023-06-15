#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
#define MIN(x,y) ((x) < (y) ? (x) : (y)) 
int main() {
   int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[20];
   scanf("%s",s1);
   char s2[20];
   scanf("%s",s2);
   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   cout<<dist[l2][l1];
   return 0;
}