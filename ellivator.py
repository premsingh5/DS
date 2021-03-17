import copy
def minChange(Arr,N,M,Check=True):
    if Check:
        k=AllareErrors(Arr,N,M)
        if k:
            return k
    K=0
    for i in range(N):
        if Arr[i]==-1:
            if i-1>=0 and Arr[i-1]!=-1:
                Arr1=copy.deepcopy(Arr)
                Arr1[i]=Arr[i-1]+1
                Arr2=copy.deepcopy(Arr)
                Arr2[i]=Arr[i-1]-1
                k=min(minChange(Arr1,N,M,False),minChange(Arr2,N,M,False))
                return k
            elif i+1<N and Arr[i+1]!=-1:
                Arr1=copy.deepcopy(Arr)
                Arr1[i]=Arr[i+1]+1
                Arr2=copy.deepcopy(Arr)
                Arr2[i]=Arr[i+1]-1
                k=min(minChange(Arr1,N,M,False),minChange(Arr2,N,M,False))
                return k
        else:
            if i!=N-1:
                if Arr[i+1]!=-1:
                    if Arr[i]>Arr[i+1]:
                        K+=1
                
    return K
def AllareErrors(Arr,N,M):
    Error=True
    for i in range(N):
        if Arr[i]!=-1:
            Error=False
    if Error:
        return N//M
    return False
if __name__=='__main__':
    Arr=[-1,-1,3,-1,-1]
    N=5
    M=5
    result=minChange(Arr,N,M)
    print(result)
