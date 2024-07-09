/*1.write a program which takes the month number as an input
    and display number of days in that month.
main()
{
    printf(" 1.January");
    printf("\n 2.February");
    printf("\n 3.March");
    printf("\n 4.April");
    printf("\n 5.May");
    printf("\n 6.June");
    printf("\n 7.July");
    printf("\n 8.August");
    printf("\n 9.September");
    printf("\n 10.October");
    printf("\n 11.November");
    printf("\n 12.December");

    int x;
    printf("\n Enter the month number:");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;

    case 2:
        printf("28/29 days");
        break;

    default:
        printf("Invalid month number");
    }
}
*/

/*2.Write a menu driven program with the following options:
    a. Addition
    b.Subtraction
    c.Multiplication
    d.Division
    e.Exit

 main()
 {
     printf(" 1.Addition");
     printf("\n 2.Subtraction");
     printf("\n 3.Multiplication");
     printf("\n 4.Division");
     printf("\n 5.Exit");

     int n,a,b;
     printf("\n Enter your choice:");
     scanf("%d",&n);

     switch(n)
     {
     case 1:
        printf("\n Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Sum of %d and %d is %d",a,b,a+b);
        break;

     case 2:
        printf("\n Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Subtraction of %d and %d is %d",a,b,a-b);
        break;

     case 3:
        printf("\n Enter two number:");
        scanf("%d%d",&a,&b);
        printf("Multiplication of %d and %d is %d",a,b,a*b);
        break;

     case 4:
        printf("\n Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Division of %d and %d is %d",a,b,a/b);
        break;

     case 5:
        printf("\n Exit");
        break;

     default:
        printf("\n Invalid Choice");
     }
 }
*/

/*3.Write a program which takes the day number of week and
    displays a unique greeting message for the day.
main()
{
    printf(" 1.Monday");
    printf("\n 2.Tuesday");
    printf("\n 3.Wednesday");
    printf("\n 4.Thursday");
    printf("\n 5.Friday");
    printf("\n 6.Saturday");
    printf("\n 7.Sunday");

    int x;
    printf("\nEnter the day number:");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("God Bless You");
        break;

    case 2:
        printf("Hello!Good to see you");
        break;

    case 3:
        printf("How are you?");
        break;

    case 4:
        printf("Thank you for your help");
        break;

    case 5:
        printf("I hope you're having a wonderful day");
        break;

    case 6:
        printf("I hope you enjoyed your weekend");
        break;

    case 7:
        printf("I hope you're having a great week");
        break;

    default:
        printf("Invalid day number");
    }
}
*/

/*4.Write a menu driven program with the following options:
    a.Check whether a given set of three numbers are lengths of an
      isosceles triangle or not.
    b.Check whether a given set of three numbers are lengths of
      sides of a right angled triangle or not.
    c.Check whether a given set of three numbers are equilateral
      triangle or not.
    d.Exit

main()
{
    printf(" 1.Isosceles triangle");
    printf("\n 2.Right angles triangle");
    printf("\n 3.Equilateral triangle");
    printf("\n 4.Exit");

    int x,a,b,c;
    printf("\nEnter your choice:");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("Enter the three sides of a triangle:");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b || b==c || c==a)
            printf("Isosceles triangle");
        else
            printf("Not an isosceles triangle");
        break;

    case 2:
        printf("Enter the three sides of a triangle:");
        scanf("%d%d%d",&a,&b,&c);
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            printf("Right angled triangle");
        else
            printf("Not a right angled triangle");
        break;

    case 3:
        printf("Enter the three sides of a triangle:");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b && b==c && c==a)
            printf("Equilateral triangle");
        else
            printf("Not an equilateral triangle");
        break;

    case 4:
        printf("Exit");
        break;

    default:
        printf("Invalid Choice");
    }
}
*/

/*5.Convert the following if-else-if construct into switch case.
    if(var==1)
        System.out.println("good");
    else if(var==2)
        System.out.println("better");
    else if(var==3)
        System.out.println("best");
    else
        System.out.println("invalid");

main()
{
    switch(var)
    {
    case 1:
        System.out.println("good");
        break;
    case 2:
        System.out.println("better");
        break;
    case 3:
        System.out.println("best");
        break;
    default:
        System.out.println("invalid");
    }
}
*/

/*6.Program to check whether a year is a leap year or not.
    Using switch statement.
main()
{
    int year,y;
    printf("Enter a year:");
    scanf("%d",&year);
    y=((year%4==0) && ((year%400==0) || (year%100!=0)));

    switch(y)
    {
    case 1:
        printf("Leap year");
        break;

    case 0:
        printf("Not a leap year");
        break;

    default:
        printf("Invalid");
    }
}
*/

/*8.Program to convert a positive number into a negative number and negative
    number into a positive number using a switch statement.
main()
{
    float n;
    int choice;
    printf("1.Negative to Positive");
    printf("\n2.Positive to Negative");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter a negative number:");
            scanf("%f",&n);
            printf("The Positive form of the number is %.2f",n*(-1));
            break;

        case 2:
            printf("Enter a positive number:");
            scanf("%f",&n);
            printf("The Negative form of the number is %.2f",n*(-1));
            break;

        default:
            printf("Invalid Choice");
    }
}
*/

/*9.Program to convert even number into its upper nearest odd number using
    switch statement.
main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2==0)
    {
    case 1:
        printf("Upper nearest odd number is %d",n+1);
        break;

    case 0:
        printf("Lower nearest even number is %d",n-1);
    }
}
*/

/*10.C program to find all roots of a quadratic equation using switch case.
main()
{
    float a,b,c;
    float root1,root2,imaginary;
    float discriminant;

    printf("Enter values of a,b,c of quadratic equation (aX^2 + bX + c):");
    scanf("%f%f%f",&a,&b,&c);

    discriminant = (b * b) - (4 * a * c);

    switch(discriminant>0)
    {
    case 1:
        root1=(-b + sqrt(discriminant)) / (2 * a);
        root2=(-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct and real roots exists: %.2f and %.2f",root1,root2);
        break;

    case 0:
        switch(discriminant<0)
        {
        case 1:
            root1=root2=-b/(2*a);
            imaginary=sqrt(-discriminant)/(2*a);
            printf("Two distinct complex roots exists: %,2f + i%.2f and %.2f - i%.2f,root",root1,imaginary,root2,imaginary);
            break;

        case 0:
            root1=root2=-b/(2*a);
            printf("Two equal and real roots exists:%.2f and %.2f",root1,root2);
            break;
        }
    }
}
*/

/*7.Program to take the value from the user as input electricity unit charges and
    calculate total electricity bill according to the given condition. Using the
    switch statement.
    For the first 50 units Rs.0.50/unit
    For the next 100 units Rs.0.75/unit
    For the next 100 units Rs.1.20/unit
    For units above 250 Rs.1.50/unit
    An additional surcharge of 20% is added to the bill.*/
main()
{
    int unit;
    float amount,total_amount,surcharge;
    printf("Enter the number of units:");
    scanf("%d",&unit);
    switch(unit<=50)
    {
    case 1:
        amount=unit*0.50;
        break;

    case 0:
        switch(unit<=150)
        {
        case 1:
            amount=25+(unit-50)*0.75;
            break;

        case 0:
            switch(unit<=250)
            {
            case 1:
                amount=100+(unit-150)*1.20;
                break;

            case 0:
                amount=220+(unit-250)*1.50;
                break;
            }
            break;
        }
        break;
    }
    surcharge=amount*0.20;
    total_amount=amount+surcharge;
    printf("Total bill is Rs.%.2f",total_amount);
}
