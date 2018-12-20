#include <stdio.h>
#include <omp.h>

int main(){
        #pragma omp parallel for schedule(dynamic)
        for (int num=0;num<10000;num++) {
            int counter=0;
            for (int i=1;i<=num;i++)    if ((num%i)==0) counter++;
            if(counter==2)  printf("Prime %d\n",num);
        }
        return 0;
}