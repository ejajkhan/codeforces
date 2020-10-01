n,m=map(int,input().split())
s=input()
s=s.split()
t=input()
t=t.split()
q=int(input())
for i in range(q):
    x=int(input())
    bal=n*m
    if bal<x:
        tut=x%bal
        #printing first word
        k=0
        for i in range(tut):
            



