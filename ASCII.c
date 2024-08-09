/*^*^*^*^*^*^*^*^*^*^*^*^Programme for writing 1 to 200 ASCII value*^*^*^*^*^*^*^*^*^*^*^*^*/
#include<stdio.h>
int main()
{
    //All charecters are stored in memory block as an integer this integer value is called ASCII value
    int i=1;
    while(i<=200)
    {
        printf("\n%d is the ASCII value of %c",i,i);
        i++;
    }
    return 0;
}