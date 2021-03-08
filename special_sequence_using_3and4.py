k = int(input())
up,cnt,mask=0,0,1
s = ""
while up < k:
    mask<<=1        #power of 2
    up+=mask        #upper limit of sequence
    cnt+=1
pos = k - (up-mask)     #position
up = mask
while cnt:
    cnt-=1
    mid = up//2
    if pos<=mid:
        s+='3'
    else:
        s+='4'
        pos-=mid
    up//=2
print(s)
'''
increasing sequence using only 3 and 4

sequence: 3,4,33,34,43,44,333,334,343,344,433,434,443,444,3333,3334...........

ex:
    ip: 10
    op: 344

    ip: 16
    op: 3334
'''