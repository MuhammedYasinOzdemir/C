#include<stdio.h>
main(){
	int i,j;
	int y1[14]={0,1,2,3,4,5,6,7,7,7,7,7,7,7};
	int y2[14]= {2,2,2,2,2,2,2,2,2,2,2,2,2,2};
	int y3[14]={12,10,8,6,4,2,0,0,0,0,0,0,0,0,0,0,0};
    int y4[14]= {2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0};
    int a1[14]={7,6,5,4,3,2,1,0,0,0,0,0,0,0};
	int a2[14]= {2,2,2,2,2,8,2,2};
	int a3[14]={0,0,2,4,6,0,10,12};
    int a4[8]= {0,2,2,2,2,4,2,2};
    int s1[14]={0,0,0,0,0,0,0,0,14,14,14,14,0,0};
	int s2[14]= {16,16,2,2,2,2,16,16,2,2,2,2,16,16};
	int s3[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int s4[14]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int ii1[14]={8,8,8,8,8,8,8,8,8,8,8,8,8,8};
	int ii2[14]= {2,2,0,2,2,2,2,2,2,2,2,2,2,2};
	int ii3[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int ii4[14]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int n1[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int n2[14]= {3,4,2,2,2,2,2,2,2,2,2,2,2,2};
	int n3[14]={1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n4[14]= {0,0,2,2,2,2,2,2,2,2,2,2,3,2};
    int n5[14]={11,11,10,9,8,7,6,5,4,3,2,1,0,0};
    int n6[14]={2,2,2,2,2,2,2,2,2,2,2,2,1,1};
    for(i=0;i<14;i++){
		for(j=0;j<y1[i];j++){
			printf(" ");
		}
		for(j=0;j<y2[i];j++){
			printf("*");
		}
		for(j=0;j<y3[i];j++){
			printf(" ");
		}
		for(j=0;j<y4[i];j++){
			printf("*");
		}
			printf("               ");
		for(j=0;j<a1[i];j++){
			printf(" ");
		}
		for(j=0;j<a2[i];j++){
			printf("*");
		}
		for(j=0;j<a3[i];j++){
			printf(" ");
		}
		for(j=0;j<a4[i];j++){
			printf("*");
		}	for(j=0;j<s1[i];j++){
			printf(" ");
		}	printf("     ");
		for(j=0;j<s2[i];j++){
			printf("*");
		}
		for(j=0;j<s3[i];j++){
			printf(" ");
		}
		for(j=0;j<s4[i];j++){
			printf("*");
			
		}	printf("     ");
		for(j=0;j<ii1[i];j++){
			printf(" ");
		}
		for(j=0;j<ii2[i];j++){
			printf("*");
		}
		for(j=0;j<ii3[i];j++){
			printf(" ");
		}
		for(j=0;j<ii4[i];j++){
			printf("*");
		}	printf("     ");
			for(j=0;j<n1[i];j++){
			printf(" ");
		}
		for(j=0;j<n2[i];j++){
			printf("*");
		}
		for(j=0;j<n3[i];j++){
			printf(" ");
		}
		for(j=0;j<n4[i];j++){
			printf("*");
		}
		for(j=0;j<n5[i];j++){
			printf(" ");
		}
			for(j=0;j<n6[i];j++){
			printf("*");
		}
		printf("\n");
	}
   
}
