import math

def find_max(l):
    m = l[0]
    for i in l:
        m = max(m, i)
    return m

def eratosthenes(num,n):
    prime = [1]*(num+1)
    p = 2
    while (p * p <= num):
        if (prime[p] == True):
            for i in range(p * p, num+1, p):
                prime[i] = False
        p += 1
    temp = 0

    # print(temp,n)
    for p in range(2, num+1):
        if(temp is n):
            break
        if prime[p]:
            print(p);temp+=1
l = [1,0.2,-3,11,23,44,55,45,77,89,67,101,223]

m = find_max(l)
eratosthenes(m, 5)

