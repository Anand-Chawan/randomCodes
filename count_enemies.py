'''
Link: https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/count-enemies-5/
'''
t = int(input())
while t:
    t=t-1
    s = input()
    cnt = s.count('O')
    s=s.split('*')
    for sub in s:
        xcnt=sub.count('X')
        if xcnt == 0:
            continue
        else:
            cnt-=(len(sub)-xcnt)
    print(cnt)