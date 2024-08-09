 //Triangular number
 #include<stdio.h>
 void triangular(int x)
 {
     int i=0;
     int sum=0;
     while(i<=x)
     {
         sum=sum+i;
     if(sum==x)
     {
     printf("\nIt is a Triangular Number");
     return;
     }
               i++;
     }
     printf("\nIt is not a Triangular Number");

 }
 int main()
 {
     int num,rtn;
     printf("\nEnter the number to be checked:");
     scanf("%d",&num);
     triangular(num);
    return 0;
 }
