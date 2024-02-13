#include(stdio.h)
int main(){
int num,tem,r,s=0;
	printf(“Enter number for check trong number OR Not”);
	scanf(“%d”,num);
tem=num;
	while(n>0)
{
	r=num%10;
	s=s+r*r*r;
	num=num/10;
}
	if(s==tem)
{
	printf(“Enter number is trong”);
}
else
{
	printf(“Enter number is not trong”);
}

return 0 ;
}
