# include<stdio.h>

int main()
{
	int choice;
	start:
		printf("\nMenu\n");
		printf("0:Exit the program\n");
		printf("1:Sum of two numbers\n");
		printf("2:Simple interset\n");
		printf("3:Positive or Negative\n");
		printf("4:Even or Odd\n");
		printf("5:Greatest of 3 number\n");
		printf("6:Sum of n numbers\n");
		printf("7:Sum of numbers upto n\n");
		printf("8:Factorial of a number\n");
		printf("9:Calculate Electricity  Bill\n");
		printf("10:HCF and LCM\n");
		printf("11:Fibonacci series upto n terms\n");
		printf("12:Digits in a number\n");
		printf("13:Reverse of a number\n");
		printf("14:Prime factors of a number\n");
		printf("15:Greater than N1 less than N2 and divisible by 7\n");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		if (choice==0)
		{
			printf("zero\n");
		}
		else if(choice==1)
		{
			int a,b,sum;
			printf("Enter the first number: ");
			scanf("%d",&a);
			printf("Enter the second number: ");
			scanf("%d",&b);	
			sum=a+b;
			printf("The sum is %d\n",sum);
		}
		else if(choice==2)
		{
			int p,t,r,si;
			printf("Enter Principle amount: ");
			scanf("%d",&p);
			printf("Enter Interest rate: ");
			scanf("%d",&r);
			printf("Enter Time period: ");
			scanf("%d",&t);
			si=(p*t*r)/100;
			printf("Simple interest is %d\n",&si);
		}
		else if(choice==3)
		{
			int a;
			printf("Enter a number: ");
			scanf("%d",&a);
			if(a<0)
			{
				printf("The %d is negative\n",a);
			}
			else
			{
				printf("The %d is positive\n",a);
			}
		}
		else if(choice==4)
		{
			int num;
			printf("Enter a number");
			scanf("%d",&num);
			if(num%2==0)
			{
				printf("%d is a even number\n");
			}
			else
			{
				printf("%d is a odd number\n");
			}
		}
		else if(choice==5)
		{
			int num1,num2,num3;
			printf("Enter the first number: ");
			scanf("%d",&num1);
			printf("Enter the second number: ");
			scanf("%d",&num2);
			printf("Enter the third number: ");
			scanf("%d",&num3);
			if(num1>num2)
			{
				if(num1>num3)
				{
					printf("%d is the greatest number\n",num1);
				}
				else
				{
					printf("%d is the greatest number\n",num3);
				}
			}
			else
			{
				if(num2>num3)
				{
					printf("%d is the greatest number\n",num2);
				}
				else
				{
					printf("%d is the greatest number\n",num3);
				}
			}
		}
		else if(choice==6)
		{
			int n,a,sum=0;
			printf("Enter the number of numbers you would like to add: ");
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
			{
				printf("Enter the %dth number: ",i);
				scanf("%d",&a);
				sum=sum+a;
			}
			printf("Sum of numbers is %d\n",sum);
		}
		else if(choice==7)
		{
			int n,sum=0;
			printf("Enter the number upto which you would like to add: ");
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
			{
				sum=sum+i;
			}
			printf("Sum of numbers is %d\n",sum);
		}
		else if(choice==8)
		{
			int a,fact=1;
			printf("Enter a number: ");
			scanf("%d",&a);
			for(int i=1;i<=a;i++)
			{
				fact=fact*i;
			}
			printf("The factorial is %d\n",fact);
		}
		else if(choice==9)
		{
			int unit,cost;
			printf("Enter the unit ");
			scanf("%d",&unit);
			if(unit<=20)
			{
				cost=80;
			}
			else if(unit<=120)
			{
				cost=80;
				unit=unit-20;
				cost=cost+(unit*8);
			}
			else
			{
				cost=80;
				cost=cost+(100*8);
				unit=unit-120;
				cost=cost+unit*10;
			}
			printf("The cost of the electricity bill is %d",cost);
		}
		else if(choice==10)
		{
			int num1,num2,prod,temp,hcf,lcm;
			printf("Enter the first number: ");
			scanf("%d",&num1);
			printf("Enter the second number: ");
			scanf("%d",&num2);
			prod=num1*num2;
			HCF:
			if(num2==0)
			{
				hcf=num1;
			}		
			else
			{
				temp=num1;
				num1=num2;
				num2=temp%num2;
				goto HCF;	
			}
			lcm=prod/hcf;
			printf("The HCF of the numbers is %d and the LCM is %d\n",hcf,lcm);
		}
		else if(choice==11)
		{
			int num,temp,a=0,b=1;
			printf("Enter the number of fibonacci numbers to output: ");
			scanf("%d",&num);
			printf("%d\n%d\n",a,b);
			for(int i=3;i<=num;i++)
			{
				temp=a+b;
				a=b;
				b=temp;
				printf("%d\n",temp);
			}
		}
		else if(choice==12)
		{
			int num,i=10,count=0;
			printf("Enter a number: ");
			scanf("%d",&num);
			while(num!=0)
			{
				num=num/i;
				count++;
			}
			printf("There are %d digits in the number\n",count);
		}
		else if(choice==13)
		{
			int num,i=10;
			int rem=0,rev=0,j=10;
			printf("Enter a number: ");
			scanf("%d",&num);
			while(num!=0)
			{
				rem=num%i;
				rev=(rev*j)+rem;
				num=num/i;
			}
			printf("The reverse is %d\n",rev);
		}
		else if(choice==14)
		{
			int num,count=0;
			printf("Enter a number: ");
			scanf("%d",&num);
			printf("Prime factors of the number are:\n");
			for(int i=1;i<=num;i++)
			{
				count=0;
				for(int j=1;j<=i;j++)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count==2)
				{
					if(num%i==0)
					{
						printf("%d\n",i);
					}
				}
		
			}
		}
		else if(choice==15)
		{
			int num,N1,N2;
			printf("Enter a number: ");
			scanf("%d",&num);
			printf("Enter N1: ");
			scanf("%d",&N1);
			printf("Enter N2: ");
			scanf("%d",&N2);
			if(num>N1)
			{
				printf("The number %d is greater than %d\n",num,N1);
			}
			else
			{
				printf("The number %d is not greater than %d\n",num,N1);
			}
	
			if(num<N2)
			{
				printf("The number %d is less than %d\n",num,N2);
			}
			else
			{
				printf("The number %d is not less than %d\n",num,N2);
			}
			if(num%7==0)
			{
				printf("The number %d is divisible by 7");
			}
			else
			{
				printf("The number %d is not divisible by 7");
			}
		}
		else 
		{
			printf("Invalid\n");
		}

		if(choice!=0)
		{
			goto start;
		}
	return 0;
}
