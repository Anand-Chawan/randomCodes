t = int(input())
l=[]
mx=0
while t>0:
    t=t-1
    n = int(input())
    temp=bin(n)[2:]
    mx=max(mx,len(temp))
    l.append(temp[::-1])
res=[]
select = [3**i for i in range(mx)]
for i in l:
    buff=[]
    for j in range(len(i)):
        if i[j] =='1':
            buff.append(select[j])
    res.append(buff)
for i in res:
    print(len(i))
    for j in i:
        print(j,end=" ")
    print("")
