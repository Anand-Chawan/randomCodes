'''
Here is your second challenge!!

Our dear 666Charlie needs your help!!. Charlie is supposed to submit an essay to his teacher, Due to the COVID pandemic he can't go to school and submit his assignments, so he needs to do it online!. Charlie is a bit weak in English grammar, he doubts whether his essay came well or not. So now, he is asking for your help. He will send you some of the sentences. All You have to do is 1) if the sentence contains more than one space in between, it has to be merged to one. 2) An extra space has to be given for the word that comes just after a period, i.e a space is mandatory after an end of the period. 3) If the sentence contains more than one special character repeating (specifically "...." or ',,,, ' )it has to be merged into one of its types.

Remember Charlie won't let you feel bad if you help him instead he will provide you points according to help. Grab the best use of your skills and help our dear 666Charlie.

Input Format

Each line contains a string s needed to be modified.

Constraints

1 <= length of strings <= 10000
Output Format

Print the grammatically correct sentence as per the conditions.

Sample Input 0

This is very   funny and cool...  Indeed!
Sample Output 0

This is very funny and cool. Indeed!
Explanation 0

By removing the extra spaces and “…” from the strings, a merged and grammatically correct string is obtained.
'''

n = input()
dot = 0
comma = 0
space = 0
res=""
for i in n:
    if i>='a' and i<='z' or i>='A' and i<='Z':
        print(i,end="")
        dot=0
        space=0
        comma=0
    elif i=='.' and dot==0:
        dot=1
        print(i,end="")
    elif i==',' and comma==0:
        comma=1
        print(i,end="")
    elif i==' ' and space==0:
        space=1
        print(i,end="")
    elif i!=' ' and i!='.' and i!=',':
        print(i,end="") 