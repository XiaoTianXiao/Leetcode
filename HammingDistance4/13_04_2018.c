#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int hammingDistance1(int x, int y) {
    int dist=0,count=0,temp=0,arr1[1024]={0},arr2[1024]={0};
    while(x>0){
        temp=x%2;
        arr1[count]=temp;
        x=x/2;
        count++;
    }
    count=0;
    while(y>0){
        temp=y%2;
        arr2[count]=temp;
        y=y/2;
        count++;
    }
    for(x=8;x>=0;x--){
        if(arr1[x] != arr2[x])
            dist++;
    }
    for(x=8;x>=0;x--){
    	printf("%d",arr1[x] );
    }
    printf("\n");
    for(x=8;x>=0;x--){
    	printf("%d",arr2[x] );
    }
    printf("\n**********************************");
    return dist;
}

int hammingDistance2(int x,int y){

    return (x == 0 && y == 0) ? 0: ((x^y) & 1) + hammingDistance2(x/2, y/2);
}
int hammingDistance3(int x, int y) {
        int dist = 0, n = x ^ y;
        while (n) {
            ++dist;
            n =n & n - 1;
        }
        return dist;
    }

int main()
{
	int ham1=hammingDistance1(16,5);
	int ham2=hammingDistance2(16,5);
	int ham3=hammingDistance2(16,5);
	printf("\nham1=hammingDistance2\n");
	printf("\nThe hammingDistance is %d\n",ham1);
	printf("**********************************\n");
	printf("ham1=hammingDistance2\n");
	printf("\nThe hammingDistance is %d\n",ham2);
	printf("**********************************\n");
	printf("ham1=hammingDistance3\n");
	printf("\nThe hammingDistance is %d\n",ham3);
	printf("\n#################Instruction################\n\nConsidering this example. Let’s say n = 10101, and dist = 0\n*Before we go into the while loop. n = 10101, dist = 0\n*Loop 1. dist = 1, n =10101 & 10100 = 10100\n*Loop 2. dist = 2, n =10100 & 10011 = 10000\n*Loop 3. dist = 3, n =10000 & (0)1111 = 0\n*Loop ends. dist = 3\n\n#The change of n :\n*10101\n*10100\n*10000\n*00000\nConclusion: n & (n-1) converts the right most 1 to 0\nThis is the key idea solving the problem. By counting how many times we can perform this operation, we know how many 1 exists in the binary representation of n\n");

	return 0;
}