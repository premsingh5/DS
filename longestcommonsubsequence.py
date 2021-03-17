def LCS(s1,s2,m,n,arr,memo):
    if m==0 or n==0:
        return
    if memo[(m,n)] is not None:
        return memo[(m,n)]
    if s1[m-1]==s2[n-1]:
        arr.append(s1[m-1])
        memo[(m,n)]=LCS(s1,s2,m-1,n-1,arr,memo)+1
    else:
        memo[(m,n)]=max(LCS(s1,s2,m-1,n,arr,memo),LCS(s1,s2,m,n-1,arr,memo))
    
    
    return memo[(m,n)],arr
if __name__=='__main__':
    X="ABCBDAB"
    Y="BDCABA"
    memo={}
    arr=[]
    s,m=LCS(X,Y,len(X),len(Y),arr,memo)
                
    
