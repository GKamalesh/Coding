Four Equal Substring

The program must accept a string S as the input. The program must print yes if the string is formed by four same substring values. Else the program must print no as the output.
Note: The string length is always divisible by 4.

Boundary Condition(s):
4 <= Length of the string <= 1000

Input Format:
The first line contains the string S.

Output Format:
The first line contains either yes or no.

Example Input/Output 1:
Input:
tentententen

Output:
yes

Explanation:
The string is formed by four substring value of "ten".

Example Input/Output 2:
Input:
helheloneone

Output:
no



s=input().strip()
l=len(s)
t=l//4
a=s[:t]
b=s[t:2*t]
c=s[2*t:3*t]
d=s[-t:]
if a==b and b==c and c==d:
    print('yes')
else:
    print('no')
