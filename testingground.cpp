
#include <stdio.h>
int main()
{
    int val = 25;
    int *ptr;
    ptr = &val;
    printf("The value is: %d", *ptr);
    return 0;
}

#include <stdio.h>
int main()
{
    char str[] = "Bassel";
    char *ptr;
    ptr = str;
    printf("My name is: %s", ptr);
    return 0;
}

#include <stdio.h>
int fpermcalc(int *x, int *y, int *z)
{
    if (y != 0)
    {
        *z = *x / (*y);
    }
    else
        return 0;
}
int main()
{
    int fuel, miles, fperm;
    printf("Enter number of driven miles: ");
    scanf("%d", &fuel);
    printf("Enter the fuel consumption: ");
    scanf("%d", &miles);
    func(&fuel, &miles, &fperm);
    printf("the fuel consumption per mile= %d", fperm);
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    int *ptr;
    ptr = arr;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("arr: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *ptr);
        *++ptr;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[5];
    int i, sum = 0;
    int *ptr;
    ptr = &sum;
    for (i = 0; i < 5; i++)
    {
        printf("Enter your value: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        *ptr = arr[i] + *ptr;
    }
    printf("Sum of array is %d", *ptr);
}

#include <stdio.h>
int length(char *str, int i, int &len)
{
    if (str[i] != '\0')
    {
        len++;
        length(str, i + 1, len);
    }
    else
        return len;
}
int main()
{
    char str[100];
    int i, len;
    printf("Enter string: ");
    scanf("%s", str);
    length(str, 0, len);
    printf("result %d", len);
}

#include <stdio.h>
int length(char str[], int i, int space)
{
    if (i == strlen(str))
        return space;
    else
    {
        if (*(str + i) == ' ')
            space++;
        return length(str, i + 1, space);
    }
}
int main()
{
    char str[100];
    printf("enter the string: ");
    gets(str);
    printf("the number of spaces in a string is %d", length(str, 0, 0));
}

#include <stdio.h>
#include <string.h>
int check(char a[], int i, int count)
{
    if (!(a[i] > 'a') || !(a[i] < 'z'))
    {
        if (count == strlen(a))
            return 1;
        else
            check(a, i + 1, count + 1);
    }
    else
        return 0;
}
int main()
{
    int x, count = 0, i = 1;
    char a[1000];
    scanf("%s", a);
    x = check(a, i, count);
    if (x)
        printf("digits only");
    else
        printf("doesn;t consist of digits");
    return 0;
}

Q12:
A) The output is:
a is 4
b is 3
s1 is I should print second
s2 is I should print first

B) The output is:
This is the function call of 1,
the addition of 0 and 5 is 5.
This is the function call of 2,
the addition of 1 and 4 is 5.
This is the function call of 3,
the addition of 2 and 3 is 5.
This is the function call of 4,
the addition of 3 and 2 is 5.
This is the function call of 5,
the addition of 4 and 1 is 5.

Q13:
The output is:
The size of a_union: 8-byte
The size of a_struct: 16-byte 
	But The real size in struct is 12-byte.

Q14: The output is:
3.500000
a
