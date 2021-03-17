def MSIS(arr):
    msis=[[] for i in range(len(arr))]
    msis[0].append(arr[0])
    Sum=[0]*len(arr)
    Sum[0]=arr[0]
    for i in range(1,len(arr)):
        for j in range(i):
            if Sum[i]<Sum[j] and arr[j]<arr[i]:
                msis[i]=msis[j].copy()
                Sum[i]=Sum[j]
        Sum[i]+=arr[i]
        msis[i].append(arr[i])
    j=0
    for k in range(1,len(arr)):
        if Sum[k]>Sum[j]:
            j=k
    print(msis[j])
    return max(Sum)
if __name__=="__main__":
    arr=[8,4,12,2,10,6,14,1,9,5,13,3,11]
    MSIS(arr)
