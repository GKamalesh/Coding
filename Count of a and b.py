Count of a and b

The program must accept a string which will contain only a and b and generate the output based on the continuous count of a or b as described in Example Input/Output section.

Boundary Condition(s):
1 <= Length of S <= 100

Input Format:
The first line contains the string.

Output Format:
The first line contains the count of a and b as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
aababbaaabbbb

Output:
2a1b1a2b3a4b

Example Input/Output 2:
Input:
bbb

Output:
3b


Max Execution Time Limit: 500 millisecs



a=input().strip()
i=0
while i<len(a):
    if a[i]=='a':
        if 'b' not in a[i:]:
            print(a[i]+str(len(a[i:])))
            exit()
        print(a[i],end=str(a[i:i+a[i:].index('b')].count('a')))
        i+=a[i:].index('b')
    else:
        if 'a' not in a[i:]:
            print(a[i]+str(len(a[i:])))
            exit()
        print(a[i],end=str(a[i:i+a[i:].index('a')].count('b')))
        i+=a[i:].index('a')
