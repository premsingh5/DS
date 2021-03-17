# cook your dish here
def pyramid(n,S,T):
    Pyramid=""
    times=n//len(S)
    add=n%len(S)
    count=0
    for i in range(times):
        Pyramid=Pyramid+S
    for k in range(add):
        Pyramid=Pyramid+S[k]
    for i in range(n-len(T)+1):
        print(Pyramid[i:i+len(T)])
        if Pyramid[i:i+len(T)]==T:
           count+=1
    return count
if __name__=="__main__":
    S=input()
    T="chefcode"
    n=12
    k=pyramid(n,S,T)
    print(k)
        
